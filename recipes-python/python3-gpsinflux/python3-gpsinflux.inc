SUMMARY = "Extract GPS values and store into InfluxDB and publish via MQTT"
HOMEPAGE = "https://github.com/iotfablab/gpsinflux"
LICENSE = "LGPLv3 & MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=024a73d05967bca8733881188d78b2ee \
                    file://LICENSE;md5=25498e25581c2413266e28dd693d4725"

SRC_URI = "https://github.com/iotfablab/gpsinflux/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "91135ca74d95ade73d164956f7f15ea0"
SRC_URI[sha256sum] = "4c259adcc2e8e8f6cab92f04695476f58abb0dbe62a2016dcb8c27c4adf7a67a"



inherit setuptools3 pypi

RDEPENDS_${PN} += "${PYTHON_PN}-influxdb ${PYTHON_PN}-paho-mqtt ${PYTHON_PN}-pynmea2 ${PYTHON_PN}-pyserial"

RDEPENDS_${PN} += "${PYTHON_PN}-modules"

