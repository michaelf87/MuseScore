//=============================================================================
//  MuseScore
//  Music Composition & Notation
//  $Id:$
//
//  Copyright (C) 2011 Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENSE.GPL
//=============================================================================

#ifndef __INSPECTOR_IMAGE_H__
#define __INSPECTOR_IMAGE_H__

#include "inspector.h"
#include "ui_inspector_image.h"
#include "libmscore/property.h"

//---------------------------------------------------------
//   InspectorImage
//---------------------------------------------------------

class InspectorImage : public InspectorBase {
      Q_OBJECT

      Ui::InspectorImage b;

      void updateScaleFromSize(const QSizeF&);
      void updateSizeFromScale(const QSizeF&);

   protected slots:
      virtual void valueChanged(int idx);

   public:
      InspectorImage(QWidget* parent);
      virtual void setElement(Element*);
      };

#endif

