import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sun/ros2_autonomous_vehicle_simulation/install/decision_making_pkg'
