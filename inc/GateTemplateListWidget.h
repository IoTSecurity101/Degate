/* -*-c++-*-

  This file is part of the IC reverse engineering tool degate.

  Copyright 2008, 2009, 2010 by Martin Schobert

  Degate is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  Degate is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with degate. If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef __GATETEMPLATELISTWIDGET_H__
#define __GATETEMPLATELISTWIDGET_H__

#include "Project.h"

#include <QTableWidget>
#include <vector>

namespace degate
{
	/**
	 * List all gate template of the logic model.
	 */
	class GateTemplateListWidget : public QTableWidget
	{
		Q_OBJECT
		
	public:
		GateTemplateListWidget(Project_shptr project, QWidget* parent);
		~GateTemplateListWidget();

		/**
		 * Get a vector of the selected gates templates.
		 * It can return an empty vector.
		 */
		const std::vector<GateTemplate_shptr>& get_selected_gates();

		/**
		 * Get the first selected gate template.
		 */
		GateTemplate_shptr get_selected_gate();

		/**
		 * Return true if at least one gate is selected.
		 */
		bool has_selection();

	public slots:
		void update_list();

	private:
		Project_shptr project;
		
	};
}

#endif