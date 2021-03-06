# These and other macros are documented in
# ../droid-configs-device/droid-configs.inc
%define device thea
%define vendor motorola
%define vendor_pretty Motorola
%define device_pretty Moto G (2nd Gen. LTE)

# Adjust this for your device
%define pixel_ratio 1.0

# Community HW adaptations need this
%define community_adaptation 1

%define additional_post_scripts ssu ur

Provides: ofono-configs
Obsoletes: ofono-configs-mer

%include droid-configs-device/droid-configs.inc 
%include patterns/patterns-sailfish-device-adaptation-thea.inc
%include patterns/patterns-sailfish-device-configuration-thea.inc
