# Set or get the register(s) value(s) from motor(s)
#
# To get familiar with the register values, go to...
# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/
# ...click on a motor model, and scroll down to the 'Control Table of RAM Area' section.

string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name              # name of the group if commanding a joint group or joint if commanding a single joint
string reg               # register name (like Profile_Velocity, Profile_Acceleration, etc...)
int32 value              # desired register value (only set if 'setting' a register)
