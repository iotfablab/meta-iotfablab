SUMMARY = "Extract IMU Values from BNO055 and store them in InfluxDB via UDP and publish via MQTT"
HOMEPAGE = "https://github.com/shantanoo-desai/bnoflux"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7e8b8d2e60aca564edd8578b5f1f4951"

SRC_URI = "https://github.com/shantanoo-desai/bnoflux/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "3bedadf9ecbced942fd82658e518cc94"
SRC_URI[sha256sum] = "e56ee727fffe27d61959f5fb35cf5cae89258da1e70f171e17a54ff640300742"

RDEPENDS_${PN} += "${PYTHON_PN}-smbus ${PYTHON_PN}-modules ${PYTHON_PN}-influxdb ${PYTHON_PN}-paho-mqtt"
