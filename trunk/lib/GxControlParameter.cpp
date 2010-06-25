/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "GxControlParameter.h"
#include <gtk/gtkprivate.h>

#define P_(s) (s)   // FIXME -> gettext

static void
gx_control_parameter_base_init (gpointer g_class)
{
	static gboolean is_initialized = FALSE;

	if (!is_initialized) {
		/* add properties and signals to the interface here */
		g_object_interface_install_property (g_class,
		                                     g_param_spec_string("var-id",
		                                                         P_("Variable"),
	                                                             P_("The id of the linked variable"),
		                                                         NULL,
		                                                         GParamFlags(GTK_PARAM_READWRITE)));
		is_initialized = TRUE;
	}
}

GType
gx_control_parameter_get_type (void)
{
	static GType iface_type = 0;
	if (iface_type == 0) {
		static const GTypeInfo info = {
			sizeof (GxControlParameterIface),
			gx_control_parameter_base_init,   /* base_init */
			NULL,   /* base_finalize */
		};
		iface_type = g_type_register_static (G_TYPE_INTERFACE, "GxControlParameter",
		                                     &info, GTypeFlags(0));
	}
	return iface_type;
}

void
gx_control_parameter_cp_configure(GxControlParameter *self, gchar* group, gchar *name, gdouble lower, gdouble upper, gdouble step)
{
	g_return_if_fail (GX_IS_CONTROL_PARAMETER(self));
	GX_CONTROL_PARAMETER_GET_INTERFACE(self)->cp_configure(self, group, name, lower, upper, step);
}

void gx_control_parameter_cp_set_value(GxControlParameter *self, gdouble value)
{
	g_return_if_fail (GX_IS_CONTROL_PARAMETER(self));
	GX_CONTROL_PARAMETER_GET_INTERFACE(self)->cp_set_value(self, value);
}

void gx_control_parameter_cp_get_value(GxControlParameter *self)
{
	g_return_if_fail (GX_IS_CONTROL_PARAMETER(self));
	GX_CONTROL_PARAMETER_GET_INTERFACE(self)->cp_get_value(self);
}
