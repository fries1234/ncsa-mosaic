sources = [
    'checkDir.c',
    'createDir.c',
    'isFlatpak.c',
    'flatpakCheck.c'
]

libutils_inc = include_directories('.')

libutils_static = static_library(
    'utils',
    sources,
    include_directories: libutils_inc
)
