FILESEXTRAPATHS_prepend := "${THISDIR}/features:"

SRC_URI_append = " file://0001-warrior-Add-UART1-in-DTSI-File.patch"
SRC_URI_append = " file://0001-warrior-Enable-UART1-in-NAND-DTS-File.patch"
SRC_URI_append = " file://evdev-enable.cfg"


