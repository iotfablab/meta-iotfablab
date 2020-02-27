SUMMARY = "Python library for the NMEA 0183 protcol"
HOMEPAGE = "https://github.com/Knio/pynmea2"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=bb5e173bc54080cb25079199959ba6b6"

SRC_URI = "https://github.com/Knio/pynmea2/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "92f8326ca221cdacb3c4ef4e3c18e06a"
SRC_URI[sha256sum] = "409098884139c252048d7fe953dcb18e8020c2e5115b669987efbb241714ded9"

DEPENDS_${PN} += "${PYTHON_PN}-modules"
RDEPENDS_${PN} += "${PYTHON_PN}-modules"


