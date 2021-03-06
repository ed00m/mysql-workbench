/* 
 * Copyright (c) 2007, 2010, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */
#ifndef _GRT_WIZARD_PLUGIN_H_
#define _GRT_WIZARD_PLUGIN_H_

#include "grt_wizard_form.h"
#include "gui_plugin_base.h"

namespace grtui
{
  class WBPUBLICBACKEND_PUBLIC_FUNC WizardPlugin : public GUIPluginBase, public WizardForm
  {
  public:
    WizardPlugin(grt::Module *module);
    
    virtual bec::GRTManager *grtm()
    {
      return GUIPluginBase::grtm();
    }
    
    virtual bool run_wizard();
  };
}


#endif /* _GRT_WIZARD_PLUGIN_H_ */
