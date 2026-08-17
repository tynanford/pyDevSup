TOP=..
include $(TOP)/configure/CONFIG
# cfg/CONFIG_PY gets auto-included by configure/CONFIG before PYTHON would
# otherwise be set (eg by configure/CONFIG_SITE), so it only works if
# PYTHON already has some value by then.  Base 7.0+'s own
# configure/CONFIG_COMMON sets "PYTHON = python" unconditionally, which
# covers that; Base 3.14/3.15 set no such default, so PYTHON is empty at
# that point and the auto-include is a silent no-op (see
# configure/CONFIG_PY) -- include explicitly here for those.  If a future
# Base version drops its own PYTHON default, auto-inclusion would stop
# working there too and this would need revisiting.
ifeq ($(EPICS_VERSION),3)
include $(TOP)/configure/CONFIG_PY
endif
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE

#----------------------------------------------------
#  Optimization of db files using dbst (DEFAULT: NO)
#DB_OPT = YES

#----------------------------------------------------
# Create and install (or just install) into <top>/db
# databases, templates, substitutions like this
DB += weather.db
PY += weather.py

#----------------------------------------------------
# If <anyname>.db template is not named <anyname>*.template add
# <anyname>_template = <templatename>

include $(TOP)/configure/RULES
ifeq ($(EPICS_VERSION),3)
include $(TOP)/configure/RULES_PY
endif
#----------------------------------------
#  ADD RULES AFTER THIS LINE

