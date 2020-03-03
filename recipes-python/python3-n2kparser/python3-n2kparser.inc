SUMMARY = "Extract values from Actisense-Serial PGNs and save them to InfluxDB and publish them to MQTT"
HOMEPAGE = "https://github.com/iotfablab/n2kparser"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4dfb5cfe796e4c313cf09ec86b8a8dc3"

SRC_URI = "https://github.com/iotfablab/n2kparser/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "65baca143edbb1fb1888724ed6582535"
SRC_URI[sha256sum] = "c2c892b52943072ef14e89c9a9d2ac5c9672f147a6eeb550a721f89a27ddcbfb"


RDEPENDS_${PN} += "${PYTHON_PN}-influxdb ${PYTHON_PN}-paho-mqtt ${PYTHON_PN}-modules"
