import math
from omnetpp.scave import results, chart, utils

# get chart properties
props = chart.get_properties()
utils.preconfigure_plot(props)

# collect parameters for query
filter_expression = props["filter"]
start_time = float(props["vector_start_time"] or -math.inf)
end_time = float(props["vector_end_time"] or math.inf)
omit_empty_vectors = props["omit_empty_vectors"] == "true"

# query vector data into a data frame
try:
    df = results.get_vectors(filter_expression, include_attrs=True, include_runattrs=True, include_itervars=True, start_time=start_time, end_time=end_time, omit_empty_vectors=omit_empty_vectors)
except results.ResultQueryError as e:
    raise chart.ChartScriptError("Error while querying results: " + str(e))

if df.empty:
    raise chart.ChartScriptError("The result filter returned no data.")

# apply vector operations
df = utils.perform_vector_ops(df, props["vector_operations"])

# plot
utils.add_legend_labels(df, props)
utils.sort_rows_by_legend(df, props)
utils.plot_vectors(df, props, sort=False)

utils.postconfigure_plot(props)

utils.export_image_if_needed(props)
utils.export_data_if_needed(df, props)
