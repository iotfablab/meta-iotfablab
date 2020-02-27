SUMMARY = "InfluxDB client"
HOMEPAGE = "https://github.com/influxdb/influxdb-python"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=046523829184aac3703a4c60c0ae2104"

SRC_URI = "git://github.com/influxdata/influxdb-python.git;protocol=https"

# Modify these as desired
PV = "1.0+git${SRCPV}"
SRCREV = "f3b3df50423bfba5cf11652cec049ec285ed7227"

S = "${WORKDIR}/git"

RDEPENDS_${PN} += "${PYTHON_PN}-modules ${PYTHON_PN}-six ${PYTHON_PN}-requests ${PYTHON_PN}-pytz ${PYTHON_PN}-dateutil"
