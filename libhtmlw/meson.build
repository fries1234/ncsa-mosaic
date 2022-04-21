sources = [
    'DrawingArea.c', 
    'HTML-PSformat.c',
    'HTML.c',
    'HTMLformat.c',
    'HTMLimages.c',
    'HTMLjot.c',
    'HTMLlists.c',
    'HTMLparse.c',
    'HTMLtable.c',
    'HTMLwidgets.c',
    'list.c',
    'AnchoredImage.c',
    'DelayedImage.c',
    'NoImage.c'
    ]


libhtmlw_inc = include_directories('.')

libhtmlw_static = static_library(
    'htmlw',
    sources,
    dependencies: [openmotif, xmu],
    include_directories: libhtmlw_inc
)

