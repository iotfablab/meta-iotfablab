SUMMARY = "InfluxDB client"
HOMEPAGE = "https://github.com/influxdb/influxdb-python"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=046523829184aac3703a4c60c0ae2104"

SRC_URI = "https://github.com/influxdata/influxdb-python/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "8d4d48bd3f41fb8c2f007a2100fc58c4"
SRC_URI[sha256sum] = "c7f87997896908913fdd4b1020dc6fd2717757beb31b3cb5a5ba1da8a46665a5"

DEPENDS_${PN} += "${PYTHON_PN}-modules"
RDEPENDS_${PN} += "${PYTHON_PN}-modules ${PYTHON_PN}-six ${PYTHON_PN}-dateutil ${PYTHON_PN}-pytz ${PYTHON_PN}-requests"
