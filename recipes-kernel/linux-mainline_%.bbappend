FILESEXTRAPATHS_prepend := "${THISDIR}/features:"
SRC_URI_append = " \
    file://custom_defconfig
    file://0001-warrior-Add-UART1-in-DTSI-File.patch \
    file://0001-warrior-Enable-UART1-in-NAND-DTS-File.patch \
 "

