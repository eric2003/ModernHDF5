windows11
cd d:\work\hdf5_work\ModernHDF5\codes\H5check_version\02\build\
#$env:HDF5_DIR = "c:/dev/HDF_Group/HDF5/1.14.0/cmake/"
#$env:path += ";C:/dev/HDF_Group/HDF5/1.14.0/bin/"
$env:HDF5_DIR = "c:/dev/HDF_Group/HDF5/1.10.9/cmake/"
$env:path += ";C:/dev/HDF_Group/HDF5/1.10.9/bin/"
cmake ..
cmake --build .

