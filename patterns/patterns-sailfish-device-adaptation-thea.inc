%package -n patterns-sailfish-device-adaptation-thea
Summary: Jolla HW Adaptation thea

Requires: droid-hal-thea
Requires: droid-hal-thea-img-boot
Requires: droid-hal-thea-kernel
Requires: droid-hal-thea-kernel-modules
Requires: droid-hal-thea-detritus
Requires: droid-config-thea-sailfish
Requires: droid-config-thea-pulseaudio-settings
Requires: droid-config-thea-policy-settings
Requires: droid-config-thea-preinit-plugin
Requires: droid-config-thea-flashing
Requires: droid-config-thea-bluez5
Requires: droid-hal-version-thea

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev
 
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# GStreamer v0.10 multimedia support is being deprecated
#Requires: gstreamer0.10-droidcamsrc
#Requires: gstreamer0.10-omx
#Requires: gstreamer0.10-droideglsink
#Requires: nemo-qtmultimedia-plugins-gstvideotexturebackend

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# jolla-rnd-device will enable usb-moded even when UI is not yet
# brought up (useful during development, available since update10)
Requires: jolla-rnd-device

# from update13, this is needed explicitly
#Requires: bluez-configs-sailfish
# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# For GPS
Requires: geoclue-provider-hybris

# Telephony (RIL sockets)
Requires: ofono-ril-plugin

# Fix for calls
Requires: pulseaudio-modules-droid-jb2q
Requires: pulseaudio-modules-droid-glue

# Flashlight
Requires: jolla-settings-system-flashlight

# For FM radio
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

%description -n patterns-sailfish-device-adaptation-thea
Pattern with packages for thea HW Adaptation

%files -n patterns-sailfish-device-adaptation-thea
