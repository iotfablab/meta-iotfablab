SUMMARY = "Extract GPS values and store into InfluxDB and publish via MQTT"
HOMEPAGE = "https://github.com/iotfablab/gpsinflux"
LICENSE = "LGPLv3 & MIT & MIT-&-LGPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=024a73d05967bca8733881188d78b2ee \
                    file://LICENSE;md5=25498e25581c2413266e28dd693d4725"

SRC_URI = "https://github.com/iotfablab/gpsinflux/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "6dc342eac842348b37668f50560cbe4d"
SRC_URI[sha256sum] = "9374621844b0c5debe9bf397e551cd832a4f597851d05b112a3e56d48661e259"



inherit setuptools3 pypi

RDEPENDS_${PN} += "${PYTHON_PN}-influxdb ${PYTHON_PN}-paho-mqtt ${PYTHON_PN}-pynmea2 ${PYTHON_PN}-pyserial"

RDEPENDS_${PN} += "${PYTHON_PN}-modules"

