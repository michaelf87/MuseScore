//=============================================================================
//  MuseSynth
//  Music Software Synthesizer
//
//  Copyright (C) 2013 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENCE.GPL
//=============================================================================

#ifndef __EFFECTGUI_H__
#define __EFFECTGUI_H__

class Effect;

//---------------------------------------------------------
//   EffectGui
//---------------------------------------------------------

class EffectGui : public QDeclarativeView {
      Q_OBJECT
      Effect* _effect;

   public slots:
      void valueChanged(const QString& name, qreal);

   public:
      EffectGui(Effect*);
      void init(QUrl& url);
      Effect* effect() const    { return _effect; }
      virtual void updateValues();
      };

#endif

