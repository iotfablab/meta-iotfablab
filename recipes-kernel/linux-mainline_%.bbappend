FILESEXTRAPATHS_prepend := "${THISDIR}/features:"
SRC_URI_append = " \
    file://0001-Add-UART1-pins-to-DTSI-file.patch \
    file://0001-Enable-UART1-in-rdk-nand.dts-file.patch \
 "

