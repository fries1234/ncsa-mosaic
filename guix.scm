(use-modules ((guix licenses)
              #:prefix license:)
             (guix gexp)
             (guix packages)
             (gnu packages image)
             (gnu packages lesstif)
             (gnu packages xorg)
             (gnu packages pkg-config)
             (guix build-system meson))

(define %source-dir
  (dirname (current-filename)))

(define-public meson
  (package
    (name "Meson")
    (version "2.7")
    (source (local-file %source-dir
                        #:recursive? #t))
    (build-system meson-build-system)
    (native-inputs (list pkg-config))
    (inputs (list libjpeg
                  libjpeg-turbo
                  libpng
                  libxmu
                  libxpm
                  libxt
                  xorgproto
                  motif))
    (home-page "http://www.ncsa.illinois.edu/research/project-highlights/ncsa-mosaic/")
    (synopsis "Web browser from the 90s")
    (description "MCSA Mosaic is a web browser from the 90s.")
    (license license:expat)))

meson
