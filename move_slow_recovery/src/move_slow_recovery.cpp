#include <recovery/move_slow_recovery.h>
#include <pluginlib/class_list_macros.h>

//register this planner as a RecoveryBehavior plugin
PLUGINLIB_DECLARE_CLASS(move_slow_recovery, MoveSlowRecovery, recovery::MoveSlowRecovery, nav_core::RecoveryBehavior)

namespace recovery
{

} //end namespace

