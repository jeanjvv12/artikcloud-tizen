/*******************************************************************************
* This file was generated by UI Builder.
* User should hand edit this file.
********************************************************************************/

#include "app_main.h"
#include "view_data.h"
#include "uib_app_manager.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include <dlog.h>
#include <callRule.h>

char rule1text[100] = "hello";
char rule2text[100] = "hello2";

typedef struct _uib_view1_control_context {
	/* add your variables here */

} uib_view1_control_context;

/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */
void view1_button1_onclicked(uib_view1_view_context *vc, Evas_Object *obj, void *event_info) {
	sendMessage();
}

/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */
void view1_button2_onclicked(uib_view1_view_context *vc, Evas_Object *obj, void *event_info) {
	getLastNormalizedMessage();
}

