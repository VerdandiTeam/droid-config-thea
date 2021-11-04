%package -n patterns-sailfish-device-configuration-thea
Summary: Jolla Configuration thea
Requires: patterns-sailfish-device-configuration-common-thea
Requires: patterns-sailfish-device-adaptation-thea

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps
# Early stages of porting benefit from these:
Requires: patterns-sailfish-rnd
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# Multi-SIM settings
Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Jolla Store items
Requires: patterns-sailfish-consumer-generic

# Non-trusted app installation support
Requires: jolla-settings-system-sideloading

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working
# sd-utils for mounting sdcard
Requires: sd-utils

# For all keyboard layouts
Requires: jolla-keyboard-layout-all

%description -n patterns-sailfish-device-configuration-thea
Pattern with packages for thea configurations

%files -n patterns-sailfish-device-configuration-thea
