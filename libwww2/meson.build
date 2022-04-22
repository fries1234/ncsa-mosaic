sources = [
    'CUkerb.c',
    'HTAccess.c',
    'HTAlert.c',
    'HTAnchor.c',
    'HTAtom.c',
    'HTSort.c',
    'HTChunk.c',
    'HTFTP.c',
    'HTFWriter.c',
    'HTFile.c',
    'HTFormat.c',
    'HTGopher.c',
    'HTInit.c',
    'HTList.c',
    'HTMIME.c',
    'HTML.c',
    'HTMLDTD.c',
    'HTMLGen.c',
    'HTNews.c',
    'HTParse.c',
    'HTPlain.c',
    'HTMosaicHTML.c',
    'HTString.c',
    'HTTCP.c',
    'HTTP.c',
    'HTTelnet.c',
    'HTWSRC.c',
    'HTWriter.c',
    'SGML.c',
    'HTWAIS.c',
    'HTIcon.c',
    'HTCompressed.c',
    'HTAAUtil.c',
    'HTAssoc.c',
    'HTUU.c',
    'HTAABrow.c',
    'HTMailto.c'
]

libwww2_inc = include_directories('.')

libwww2_static = static_library(
    'www2',
    sources,
    dependencies: compactstring,
    include_directories: libwww2_inc,
    c_args: '-fcommon'
)

