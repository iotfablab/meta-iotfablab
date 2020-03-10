SUMMARY = "systemd services for the custom python applications and configuration file"

LICENSE = "MIT"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

FILES_${PN} += "${systemd_unitdir}/*"

RDEPENDS_${PN} = "bash"

inherit systemd

SRC_URI = "file://umg/conf.json \
           file://gps/gps.service \
           file://imu/imu.service \
           file://nmea2k/nmea2k.service \
           file://button/button.service \
	  "

do_install() {

	# App Configuration File
	install -Dm 0644 ${WORKDIR}/umg/conf.json ${D}/${sysconfdir}/umg/conf.json

	# GPS App SystemD Service
	install -Dm 0644 ${WORKDIR}/gps/gps.service ${D}/${systemd_unitdir}/system/gps.service

	# IMU App SystemD Service
	install -Dm 0644 ${WORKDIR}/imu/imu.service ${D}/${systemd_unitdir}/system/imu.service

	# Button App SystemD Service
	install -Dm 0644 ${WORKDIR}/button/button.service ${D}/${systemd_unitdir}/system/button.service

	# NMEA2K App SystemD Service
	install -Dm 0644 ${WORKDIR}/nmea2k/nmea2k.service ${D}/${systemd_unitdir}/system/nmea2k.service
}

SYSTEMD_SERVICE_${PN} = "gps.service"
SYSTEMD_SERVICE_${PN} = "imu.service"
SYSTEMD_SERVICE_${PN} = "button.service"
SYSTEMD_SERVICE_${PN} = "nmea2k.service"
