@#include "constants/bg_event_constants.h"
@#include "constants/event_object_movement_constants.h"
@#include "constants/event_objects.h"
#include "constants/flags.h"
#include "constants/items.h"
@#include "constants/map_scripts.h"
#include "constants/layouts.h"
#include "constants/maps.h"
@#include "constants/secret_bases.h"
#include "constants/vars.h"
#include "constants/weather.h"
@#include "constants/trainer_hill.h"
    .include "asm/macros.inc"
    .include "constants/constants.inc"
    .include "constants/item_data_constants.inc"

    .section .rodata

    .include "data/maps/events.inc"
