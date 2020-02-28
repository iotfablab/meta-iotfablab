SUMMARY = "Log Button Presses in InfluxDB and publish them to an MQTT broker"
HOMEPAGE = "https://github.com/shantanoo-desai/buttoninflux"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f1a11668875681869876045d67e67b4a"

SRC_URI = "https://github.com/shantanoo-desai/buttonflux/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "98c9f954ce65d6f0c5d01764c9e499c3"
SRC_URI[sha256sum] = "e9b198bf0fe006d270cac359962c3bc2478e3806539688c8e9a99cf5e483993e"

RDEPENDS_${PN} += "${PYTHON_PN}-influxdb ${PYTHON_PN}-paho-mqtt ${PYTHON_PN}-evdev"

RDEPENDS_${PN} += "${PYTHON_PN}-modules"
