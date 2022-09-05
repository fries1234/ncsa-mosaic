project(
    'ncsa-mosaic',
    'c',
    version: '2.7b6-flatpak4'
)

cc = meson.get_compiler('c')

openmotif = cc.find_library('Xm', required: true)
xmu = dependency('xmu')
libpng = dependency('libpng')
libjpeg = dependency('libjpeg')

include_dir = include_directories('.')

subdir('libnut')
subdir('libcompactstring')
compactstring = declare_dependency(link_with: libcompactstring_static, include_directories: include_dir)
subdir('libwww2')
subdir('libXmx')
subdir('libhtmlw')
subdir('libutils')

nut = declare_dependency(link_with: libnut_static, include_directories: include_dir)
www2 = declare_dependency(link_with: libwww2_static, include_directories: include_dir)
Xmx = declare_dependency(link_with: libXmx_static, include_directories: include_dir)
htmlw = declare_dependency(link_with: libhtmlw_static, include_directories: include_dir)
utils = declare_dependency(link_with: libutils_static, include_directories: include_dir)

subdir('src')
