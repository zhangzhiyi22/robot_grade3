# This service is used specifically in the interbotix_perception_modules package
#
# Parameters used to tune the various PCL Pointcloud filters

float32 x_filter_min            # minimum value [m] along the x axis beyond which all points will be cropped when doing Crop Box Filtering
float32 x_filter_max            # maximum value [m] along the x axis beyond which all points will be cropped when doing Crop Box Filtering
float32 y_filter_min            # minimum value [m] along the y axis beyond which all points will be cropped when doing Crop Box Filtering
float32 y_filter_max            # maximum value [m] along the y axis beyond which all points will be cropped when doing Crop Box Filtering
float32 z_filter_min            # minimum value [m] along the z axis beyond which all points will be cropped when doing Crop Box Filtering
float32 z_filter_max            # maximum value [m] along the z axis beyond which all points will be cropped when doing Crop Box Filtering
float32 voxel_leaf_size         # voxel leaf size [m] for the x, y, and z axes when doing Voxel Filtering
int32 plane_max_iter            # maximum number of iterations the algorithm should go when when doing Planar Segmentation
float32 plane_dist_thresh       # distance [m] perpendicular from the planar model outside of which points should not be segmented out when doing Planar Segmentation
float32 ror_radius_search       # desired search radius when doing Radius Outlier Removal
int32 ror_min_neighbors         # minimum number of neighbors a point should have to not be cropped out when doing Radius Outlier Removal
float32 cluster_tol             # any point within this distance [m] will be considered part of the same cluster
int32 cluster_min_size          # minimum number of points a cluster must have to be considered a cluster
int32 cluster_max_size          # maximum number of points a cluster can have to be considered a cluster
