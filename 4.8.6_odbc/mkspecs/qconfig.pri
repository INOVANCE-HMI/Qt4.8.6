#configuration
CONFIG +=  cross_compile shared def_files_disabled no_mocdepend release qt_no_framework
QT_ARCH = arm
QT_EDITION = OpenSource
QT_CONFIG +=  no-pkg-config shared embedded reduce_exports reduce_relocations ipv6 clock-gettime clock-monotonic mremap getaddrinfo ipv6ifname getifaddrs inotify no-jpeg no-mng png no-tiff freetype zlib openssl alsa concurrent svg script release

#versioning
QT_VERSION = 4.8.6
QT_MAJOR_VERSION = 4
QT_MINOR_VERSION = 8
QT_PATCH_VERSION = 6

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 
QT_NAMESPACE_MAC_CRC = 

