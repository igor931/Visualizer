#ifndef DEFINE
#define DEFINE

#include "qmath.h"  /// Для использования тригонометрических функций

/// Общие параметры

#define GEN_ZOOM                10      /// Количество пикселей в одном делении по умолчанию
#define GEN_SUM_VISUAL_VALUES   10      /// Отображаемое количество значений массива в окне Информации
#define GEN_LIMIT_POINTS        1000    /// Предельное колличество отображаемых точек траектории

/// Параметры цветов зон видимости

#define CLR_LINE_AREA           18      /// Цвет границы неподвижных зон выдимости          (Тёмно-Жёлтый)
#define CLR_AREA                12      /// Цвет неподвижных зон видимости                  (Жёлтый)
#define CLR_LINE_MOVE_AREA      14      /// Цвет границы неподвижных зон выдимости          (Тёмно-Зелёный)
#define CLR_MOVE_AREA           8       /// Цвет неподвижных зон видимости                  (Зелёный)

/// Параметры цветов чужих ПСОИ

#define CLR_A_PCAI              9       /// Цвет ПСОИ                           (Синий)

/// Параметры цветов эталонов и трасс

#define CLR_ETALON              4       /// Цвет эталона                        (Тёмно-Серый)
#define CLR_FR_TRACK            13      /// Цвет своей трассы                   (Тёмно-Красный)
#define CLR_AL_TRACK            15      /// Цвет чужой трассы                   (Тёмно-Синий)
#define CLR_TRUE_FR_TRACK       7       /// Цвет подтвержденной своей трассы    (Красный)
#define CLR_TRUE_AL_TRACK       9       /// Цвет подтвержденной чужой трассы    (Синий)
#define CLR_HIGHLIGHT           8       /// Цвет подсвечивания при наведении    (Зелёный)
#define CLR_SELECT              14      /// Цвет подсвечивания при выборе       (Тёмно-Зелёный)

/// Параметры отрисовки зон видимости

#define WDT_AREA                3       /// Толщина границ зон видимости
#define ALPHA_AREA              10      /// Прозрачность зон видимости

/// Толщина эталонов и трасс

#define WDT_PATH                1       /// Толщина траекторий
#define WDT_MEMORY_POINT        2       /// Размер предыдущих точек
#define WDT_LAST_POINT          3       /// Размер последней точки
#define WDT_ARROW               5       /// Толщина символа
#define WDT_HIGHLIGHT           15      /// Толщина подсвечивания при наведении
#define WDT_SELECT              15      /// Толщина подсвечивания при выборе

/// График координат

#define XY_MEASURE              1000    /// Масштаб, в одном делении 1000 м

#define XY_HA_LENGTH            25      /// Длина символа Гипер Звукового Летательного аппарата (Hypersonic aircraft)
#define XY_HA_ANGLE             M_PI_2  /// Угол острия символа Гипер Звукового Летательного аппарата (Hypersonic aircraft)

#define XY_SA_LENGTH            25      /// Длина символа Стратегической Авиации (Strategic Aviation)
#define XY_SA_ANGLE             M_PI_2  /// Угол острия символа Стратегической Авиации (Strategic Aviation)

#define XY_CM_LENGTH            20      /// Длина символа Крылатой Ракеты (Cruise Missile)
#define XY_CM_ANGLE             M_PI_4  /// Угол острия символа Крылатой Ракеты (Cruise Missile)

#define XY_BG_LENGTH            30      /// Длина символа Баллистической Цели (Ballistic Goal)
#define XY_BG_ANGLE             M_PI_4  /// Угол острия символа Баллистической Цели (Ballistic Goal)

#define XY_SEA_LENGTH           25      /// Длина символа Надводной Цели (SEA)
#define XY_SEA_ANGLE            M_PI_2  /// Угол острия символа Надводной Цели (SEA)

#define XY_GROUND_LENGTH        30      /// Длина символа Наземной Цели (GROUND)
#define XY_GROUND_ANGLE         M_PI_2  /// Угол острия символа Наземной Цели (GROUND)

/// График высот

#define H_STEP_ZOOM             2       /// Шаг изменения зумирования
#define H_MEASURE               1000    /// Масштаб, в одном делении 1000 м
#define H_EXPANSION             2       /// Коэффициент растяжения оси ординат
#define H_SHIFT                 5       /// Сдвиг относительно правой и верхней грани

/// Параметры пунктов управления

#define CC_FR_1_X               0       /// Координата X своего пункта управления 1  (Ростов)
#define CC_FR_1_Y               0       /// Координата Y своего пункта управления 1  (Ростов)

#define CC_FR_2_X               -422000 /// Координата X своего пункта управления 2  (Севастополь)
#define CC_FR_2_Y               -284000 /// Координата Y своего пункта управления 2  (Севастополь)

#define CC_FR_3_X               -281000 /// Координата X своего пункта управления 3  (Феодосия)
#define CC_FR_3_Y               -238000 /// Координата Y своего пункта управления 3  (Феодосия)

#define CC_FR_4_X               -401000 /// Координата X своего пунтка управления 4  (Армянск)
#define CC_FR_4_Y               -130000 /// Координата Y своего пункта управления 4  (Армянск)

#define CC_AL_1_X               -270000 /// Координата X чужого пункта управления 1
#define CC_AL_1_Y               -640000 /// Координата Y чужого пункта управления 1

#define CC_AL_2_X               -400000 /// Координата X чужого пункта управления 2
#define CC_AL_2_Y               -600000 /// Координата Y чужого пункта управления 2

#define CC_AL_3_X               -480000 /// Координата X чужого пункта управления 3
#define CC_AL_3_Y               -85000  /// Координата Y чужого пункта управления 3

/// Параметры зон видимостей

#define AREA_1_X                0       /// Координата Х центра зоны видимости 1    (Ростов)
#define AREA_1_Y                0       /// Координата Y центра зоны видимости 1    (Ростов)
#define AREA_1_R                600000  /// Радиус зоны видимости 1                 (Ростов)

#define AREA_2_X                -422000 /// Координата Х центра зоны видимости 2    (Севастополь)
#define AREA_2_Y                -284000 /// Координата Y центра зоны видимости 2    (Севастополь)
#define AREA_2_R                400000  /// Радиус зоны видимости 2                 (Севастополь)

#define AREA_17_R               300000  /// Радиус зоны видимости 17 (Беспилотник)
#define AREA_51_R               300000  /// Радиус зоны видимости 51 (Самолёт-Разведчик)
#define AREA_53_R               350000  /// Радиус зоны видимости 53 (А-100)

#endif // DEFINE
