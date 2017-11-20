### SYSTEM LIBS
PRODUCT_PACKAGES += \
    libjson \
    libion \
    libxml2

### POWER
PRODUCT_PACKAGES += \
    librqbalance

### AUDIO
# For audio.primary
PRODUCT_PACKAGES += \
    libtinyalsa \
    tinymix

# Audio effects
PRODUCT_PACKAGES += \
    libqcomvisualizer \
    libqcomvoiceprocessing \
    libqcomvoiceprocessingdescriptors \
    libqcompostprocbundle \
    libvolumelistener
