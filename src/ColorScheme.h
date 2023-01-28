/*
  TVTest
  Copyright(c) 2008-2020 DBCTRADO

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#ifndef TVTEST_COLOR_SCHEME_H
#define TVTEST_COLOR_SCHEME_H


#include <vector>
#include <memory>
#include "Theme.h"
#include "Settings.h"


namespace TVTest
{

	constexpr std::size_t MAX_COLORSCHEME_NAME = 128;


	class CColorScheme
	{
	public:
		enum {
			COLOR_STATUSBACK1,
			COLOR_STATUSBACK2,
			COLOR_STATUSTEXT,
			COLOR_STATUSITEMBORDER,
			COLOR_STATUSBOTTOMITEMBACK1,
			COLOR_STATUSBOTTOMITEMBACK2,
			COLOR_STATUSBOTTOMITEMTEXT,
			COLOR_STATUSBOTTOMITEMBORDER,
			COLOR_STATUSHIGHLIGHTBACK1,
			COLOR_STATUSHIGHLIGHTBACK2,
			COLOR_STATUSHIGHLIGHTTEXT,
			COLOR_STATUSHIGHLIGHTBORDER,
			COLOR_STATUSBORDER,
			COLOR_STATUSRECORDINGCIRCLE,
			COLOR_STATUSEVENTPROGRESSBACK1,
			COLOR_STATUSEVENTPROGRESSBACK2,
			COLOR_STATUSEVENTPROGRESSBORDER,
			COLOR_STATUSEVENTPROGRESSELAPSED1,
			COLOR_STATUSEVENTPROGRESSELAPSED2,
			COLOR_STATUSEVENTPROGRESSELAPSEDBORDER,
			COLOR_SPLITTER,
			COLOR_SCREENBORDER,
			COLOR_WINDOWFRAMEBACK,
			COLOR_WINDOWFRAMEBORDER,
			COLOR_WINDOWACTIVEFRAMEBACK,
			COLOR_WINDOWACTIVEFRAMEBORDER,
			COLOR_PANELBACK,
			COLOR_PANELTEXT,
			COLOR_PANELTABBACK1,
			COLOR_PANELTABBACK2,
			COLOR_PANELTABTEXT,
			COLOR_PANELTABBORDER,
			COLOR_PANELCURTABBACK1,
			COLOR_PANELCURTABBACK2,
			COLOR_PANELCURTABTEXT,
			COLOR_PANELCURTABBORDER,
			COLOR_PANELTABMARGIN1,
			COLOR_PANELTABMARGIN2,
			COLOR_PANELTABMARGINBORDER,
			COLOR_PANELTABLINE,
			COLOR_PANELTITLEBACK1,
			COLOR_PANELTITLEBACK2,
			COLOR_PANELTITLETEXT,
			COLOR_PANELTITLEBORDER,
			COLOR_PROGRAMINFOBACK,
			COLOR_PROGRAMINFOTEXT,
			COLOR_INFORMATIONPANEL_EVENTINFOBORDER,
			COLOR_INFORMATIONPANEL_BUTTONBACK1,
			COLOR_INFORMATIONPANEL_BUTTONBACK2,
			COLOR_INFORMATIONPANEL_BUTTONTEXT,
			COLOR_INFORMATIONPANEL_BUTTONBORDER,
			COLOR_INFORMATIONPANEL_HOTBUTTONBACK1,
			COLOR_INFORMATIONPANEL_HOTBUTTONBACK2,
			COLOR_INFORMATIONPANEL_HOTBUTTONTEXT,
			COLOR_INFORMATIONPANEL_HOTBUTTONBORDER,
			COLOR_PROGRAMLISTPANEL_CHANNELBACK1,
			COLOR_PROGRAMLISTPANEL_CHANNELBACK2,
			COLOR_PROGRAMLISTPANEL_CHANNELTEXT,
			COLOR_PROGRAMLISTPANEL_CHANNELBORDER,
			COLOR_PROGRAMLISTPANEL_CURCHANNELBACK1,
			COLOR_PROGRAMLISTPANEL_CURCHANNELBACK2,
			COLOR_PROGRAMLISTPANEL_CURCHANNELTEXT,
			COLOR_PROGRAMLISTPANEL_CURCHANNELBORDER,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONBACK1,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONBACK2,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONTEXT,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONBORDER,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONHOTBACK1,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONHOTBACK2,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONHOTTEXT,
			COLOR_PROGRAMLISTPANEL_CHANNELBUTTONHOTBORDER,
			COLOR_PROGRAMLISTPANEL_EVENTBACK1,
			COLOR_PROGRAMLISTPANEL_EVENTBACK2,
			COLOR_PROGRAMLISTPANEL_EVENTTEXT,
			COLOR_PROGRAMLISTPANEL_EVENTBORDER,
			COLOR_PROGRAMLISTPANEL_CUREVENTBACK1,
			COLOR_PROGRAMLISTPANEL_CUREVENTBACK2,
			COLOR_PROGRAMLISTPANEL_CUREVENTTEXT,
			COLOR_PROGRAMLISTPANEL_CUREVENTBORDER,
			COLOR_PROGRAMLISTPANEL_TITLEBACK1,
			COLOR_PROGRAMLISTPANEL_TITLEBACK2,
			COLOR_PROGRAMLISTPANEL_TITLETEXT,
			COLOR_PROGRAMLISTPANEL_TITLEBORDER,
			COLOR_PROGRAMLISTPANEL_CURTITLEBACK1,
			COLOR_PROGRAMLISTPANEL_CURTITLEBACK2,
			COLOR_PROGRAMLISTPANEL_CURTITLETEXT,
			COLOR_PROGRAMLISTPANEL_CURTITLEBORDER,
			COLOR_CHANNELPANEL_CHANNELNAMEBACK1,
			COLOR_CHANNELPANEL_CHANNELNAMEBACK2,
			COLOR_CHANNELPANEL_CHANNELNAMETEXT,
			COLOR_CHANNELPANEL_CHANNELNAMEBORDER,
			COLOR_CHANNELPANEL_CURCHANNELNAMEBACK1,
			COLOR_CHANNELPANEL_CURCHANNELNAMEBACK2,
			COLOR_CHANNELPANEL_CURCHANNELNAMETEXT,
			COLOR_CHANNELPANEL_CURCHANNELNAMEBORDER,
			COLOR_CHANNELPANEL_EVENTNAME1BACK1,
			COLOR_CHANNELPANEL_EVENTNAME1BACK2,
			COLOR_CHANNELPANEL_EVENTNAME1TEXT,
			COLOR_CHANNELPANEL_EVENTNAME1BORDER,
			COLOR_CHANNELPANEL_EVENTNAME2BACK1,
			COLOR_CHANNELPANEL_EVENTNAME2BACK2,
			COLOR_CHANNELPANEL_EVENTNAME2TEXT,
			COLOR_CHANNELPANEL_EVENTNAME2BORDER,
			COLOR_CHANNELPANEL_CUREVENTNAME1BACK1,
			COLOR_CHANNELPANEL_CUREVENTNAME1BACK2,
			COLOR_CHANNELPANEL_CUREVENTNAME1TEXT,
			COLOR_CHANNELPANEL_CUREVENTNAME1BORDER,
			COLOR_CHANNELPANEL_CUREVENTNAME2BACK1,
			COLOR_CHANNELPANEL_CUREVENTNAME2BACK2,
			COLOR_CHANNELPANEL_CUREVENTNAME2TEXT,
			COLOR_CHANNELPANEL_CUREVENTNAME2BORDER,
			COLOR_CHANNELPANEL_FEATUREDMARK1,
			COLOR_CHANNELPANEL_FEATUREDMARK2,
			COLOR_CHANNELPANEL_FEATUREDMARKBORDER,
			COLOR_CHANNELPANEL_PROGRESS1,
			COLOR_CHANNELPANEL_PROGRESS2,
			COLOR_CHANNELPANEL_PROGRESSBORDER,
			COLOR_CHANNELPANEL_CURPROGRESS1,
			COLOR_CHANNELPANEL_CURPROGRESS2,
			COLOR_CHANNELPANEL_CURPROGRESSBORDER,
			COLOR_CONTROLPANELBACK1,
			COLOR_CONTROLPANELBACK2,
			COLOR_CONTROLPANELTEXT,
			COLOR_CONTROLPANELITEMBORDER,
			COLOR_CONTROLPANELHIGHLIGHTBACK1,
			COLOR_CONTROLPANELHIGHLIGHTBACK2,
			COLOR_CONTROLPANELHIGHLIGHTTEXT,
			COLOR_CONTROLPANELHIGHLIGHTBORDER,
			COLOR_CONTROLPANELCHECKEDBACK1,
			COLOR_CONTROLPANELCHECKEDBACK2,
			COLOR_CONTROLPANELCHECKEDTEXT,
			COLOR_CONTROLPANELCHECKEDBORDER,
			COLOR_CONTROLPANELMARGIN,
			COLOR_CAPTIONPANELBACK,
			COLOR_CAPTIONPANELTEXT,
			COLOR_TITLEBARBACK1,
			COLOR_TITLEBARBACK2,
			COLOR_TITLEBARTEXT,
			COLOR_TITLEBARTEXTBORDER,
			COLOR_TITLEBARICONBACK1,
			COLOR_TITLEBARICONBACK2,
			COLOR_TITLEBARICON,
			COLOR_TITLEBARICONBORDER,
			COLOR_TITLEBARHIGHLIGHTBACK1,
			COLOR_TITLEBARHIGHLIGHTBACK2,
			COLOR_TITLEBARHIGHLIGHTICON,
			COLOR_TITLEBARHIGHLIGHTBORDER,
			COLOR_TITLEBARBORDER,
			COLOR_SIDEBARBACK1,
			COLOR_SIDEBARBACK2,
			COLOR_SIDEBARICON,
			COLOR_SIDEBARITEMBORDER,
			COLOR_SIDEBARHIGHLIGHTBACK1,
			COLOR_SIDEBARHIGHLIGHTBACK2,
			COLOR_SIDEBARHIGHLIGHTICON,
			COLOR_SIDEBARHIGHLIGHTBORDER,
			COLOR_SIDEBARCHECKBACK1,
			COLOR_SIDEBARCHECKBACK2,
			COLOR_SIDEBARCHECKICON,
			COLOR_SIDEBARCHECKBORDER,
			COLOR_SIDEBARBORDER,
			COLOR_NOTIFICATIONBARBACK1,
			COLOR_NOTIFICATIONBARBACK2,
			COLOR_NOTIFICATIONBARTEXT,
			COLOR_NOTIFICATIONBARWARNINGTEXT,
			COLOR_NOTIFICATIONBARERRORTEXT,
			COLOR_EVENTINFOPOPUP_BACK,
			COLOR_EVENTINFOPOPUP_TEXT,
			COLOR_EVENTINFOPOPUP_EVENTTITLE,
			COLOR_PROGRAMGUIDE_BACK,
			COLOR_PROGRAMGUIDE_TEXT,
			COLOR_PROGRAMGUIDE_EVENTTITLE,
			COLOR_PROGRAMGUIDE_HIGHLIGHTTEXT,
			COLOR_PROGRAMGUIDE_HIGHLIGHTTITLE,
			COLOR_PROGRAMGUIDE_HIGHLIGHTBACK,
			COLOR_PROGRAMGUIDE_HIGHLIGHTBORDER,
			COLOR_PROGRAMGUIDE_FEATUREDMARK1,
			COLOR_PROGRAMGUIDE_FEATUREDMARK2,
			COLOR_PROGRAMGUIDE_FEATUREDMARKBORDER,
			COLOR_PROGRAMGUIDE_CHANNELBACK1,
			COLOR_PROGRAMGUIDE_CHANNELBACK2,
			COLOR_PROGRAMGUIDE_CHANNELTEXT,
			COLOR_PROGRAMGUIDE_CURCHANNELBACK1,
			COLOR_PROGRAMGUIDE_CURCHANNELBACK2,
			COLOR_PROGRAMGUIDE_CURCHANNELTEXT,
			COLOR_PROGRAMGUIDE_TIMEBACK1,
			COLOR_PROGRAMGUIDE_TIMEBACK2,
			COLOR_PROGRAMGUIDE_TIMEBACK_0TO2_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_0TO2_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_3TO5_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_3TO5_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_6TO8_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_6TO8_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_9TO11_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_9TO11_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_12TO14_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_12TO14_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_15TO17_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_15TO17_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_18TO20_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_18TO20_2,
			COLOR_PROGRAMGUIDE_TIMEBACK_21TO23_1,
			COLOR_PROGRAMGUIDE_TIMEBACK_21TO23_2,
			COLOR_PROGRAMGUIDE_TIMETEXT,
			COLOR_PROGRAMGUIDE_TIMELINE,
			COLOR_PROGRAMGUIDE_CURTIMELINE,
			COLOR_PROGRAMGUIDE_DATEBUTTON_TEXT,
			COLOR_PROGRAMGUIDE_DATEBUTTON_SUNDAYTEXT,
			COLOR_PROGRAMGUIDE_DATEBUTTON_SATURDAYTEXT,
			COLOR_PROGRAMGUIDE_DATEBUTTON_BACK1,
			COLOR_PROGRAMGUIDE_DATEBUTTON_BACK2,
			COLOR_PROGRAMGUIDE_DATEBUTTON_BORDER,
			COLOR_PROGRAMGUIDE_DATEBUTTON_CURTEXT,
			COLOR_PROGRAMGUIDE_DATEBUTTON_CURBACK1,
			COLOR_PROGRAMGUIDE_DATEBUTTON_CURBACK2,
			COLOR_PROGRAMGUIDE_DATEBUTTON_CURBORDER,
			COLOR_PROGRAMGUIDE_DATEBUTTON_HOTTEXT,
			COLOR_PROGRAMGUIDE_DATEBUTTON_HOTBACK1,
			COLOR_PROGRAMGUIDE_DATEBUTTON_HOTBACK2,
			COLOR_PROGRAMGUIDE_DATEBUTTON_HOTBORDER,
			COLOR_PROGRAMGUIDE_CONTENT_NEWS,
			COLOR_PROGRAMGUIDE_CONTENT_SPORTS,
			COLOR_PROGRAMGUIDE_CONTENT_INFORMATION,
			COLOR_PROGRAMGUIDE_CONTENT_DRAMA,
			COLOR_PROGRAMGUIDE_CONTENT_MUSIC,
			COLOR_PROGRAMGUIDE_CONTENT_VARIETY,
			COLOR_PROGRAMGUIDE_CONTENT_MOVIE,
			COLOR_PROGRAMGUIDE_CONTENT_ANIME,
			COLOR_PROGRAMGUIDE_CONTENT_DOCUMENTARY,
			COLOR_PROGRAMGUIDE_CONTENT_THEATER,
			COLOR_PROGRAMGUIDE_CONTENT_EDUCATION,
			COLOR_PROGRAMGUIDE_CONTENT_WELFARE,
			COLOR_PROGRAMGUIDE_CONTENT_OTHER,
			COLOR_PROGRAMGUIDE_CONTENT_FIRST = COLOR_PROGRAMGUIDE_CONTENT_NEWS,
			COLOR_PROGRAMGUIDE_CONTENT_LAST = COLOR_PROGRAMGUIDE_CONTENT_OTHER,
			COLOR_LAST = COLOR_PROGRAMGUIDE_CONTENT_LAST,
			NUM_COLORS
		};
		enum {
			GRADIENT_STATUSBACK,
			GRADIENT_STATUSBOTTOMITEMBACK,
			GRADIENT_STATUSHIGHLIGHTBACK,
			GRADIENT_STATUSEVENTPROGRESSBACK,
			GRADIENT_STATUSEVENTPROGRESSELAPSED,
			GRADIENT_PANELTABBACK,
			GRADIENT_PANELCURTABBACK,
			GRADIENT_PANELTABMARGIN,
			GRADIENT_PANELTITLEBACK,
			GRADIENT_INFORMATIONPANEL_BUTTONBACK,
			GRADIENT_INFORMATIONPANEL_HOTBUTTONBACK,
			GRADIENT_PROGRAMLISTPANEL_CHANNELBACK,
			GRADIENT_PROGRAMLISTPANEL_CURCHANNELBACK,
			GRADIENT_PROGRAMLISTPANEL_CHANNELBUTTONBACK,
			GRADIENT_PROGRAMLISTPANEL_CHANNELBUTTONHOTBACK,
			GRADIENT_PROGRAMLISTPANEL_EVENTBACK,
			GRADIENT_PROGRAMLISTPANEL_CUREVENTBACK,
			GRADIENT_PROGRAMLISTPANEL_TITLEBACK,
			GRADIENT_PROGRAMLISTPANEL_CURTITLEBACK,
			GRADIENT_CHANNELPANEL_CHANNELNAMEBACK,
			GRADIENT_CHANNELPANEL_CURCHANNELNAMEBACK,
			GRADIENT_CHANNELPANEL_EVENTNAMEBACK1,
			GRADIENT_CHANNELPANEL_EVENTNAMEBACK2,
			GRADIENT_CHANNELPANEL_CUREVENTNAMEBACK1,
			GRADIENT_CHANNELPANEL_CUREVENTNAMEBACK2,
			GRADIENT_CHANNELPANEL_FEATUREDMARK,
			GRADIENT_CHANNELPANEL_PROGRESS,
			GRADIENT_CHANNELPANEL_CURPROGRESS,
			GRADIENT_CONTROLPANELBACK,
			GRADIENT_CONTROLPANELHIGHLIGHTBACK,
			GRADIENT_CONTROLPANELCHECKEDBACK,
			GRADIENT_TITLEBARBACK,
			GRADIENT_TITLEBARICON,
			GRADIENT_TITLEBARHIGHLIGHTBACK,
			GRADIENT_SIDEBARBACK,
			GRADIENT_SIDEBARHIGHLIGHTBACK,
			GRADIENT_SIDEBARCHECKBACK,
			GRADIENT_NOTIFICATIONBARBACK,
			GRADIENT_PROGRAMGUIDE_FEATUREDMARK,
			GRADIENT_PROGRAMGUIDECHANNELBACK,
			GRADIENT_PROGRAMGUIDECURCHANNELBACK,
			GRADIENT_PROGRAMGUIDETIMEBACK,
			GRADIENT_PROGRAMGUIDETIME0TO2BACK,
			GRADIENT_PROGRAMGUIDETIME3TO5BACK,
			GRADIENT_PROGRAMGUIDETIME6TO8BACK,
			GRADIENT_PROGRAMGUIDETIME9TO11BACK,
			GRADIENT_PROGRAMGUIDETIME12TO14BACK,
			GRADIENT_PROGRAMGUIDETIME15TO17BACK,
			GRADIENT_PROGRAMGUIDETIME18TO20BACK,
			GRADIENT_PROGRAMGUIDETIME21TO23BACK,
			GRADIENT_PROGRAMGUIDE_DATEBUTTON_BACK,
			GRADIENT_PROGRAMGUIDE_DATEBUTTON_CURBACK,
			GRADIENT_PROGRAMGUIDE_DATEBUTTON_HOTBACK,
			GRADIENT_PROGRAMGUIDE_FAVORITEBUTTON_BACK,
			GRADIENT_PROGRAMGUIDE_FAVORITEBUTTON_CURBACK,
			GRADIENT_PROGRAMGUIDE_FAVORITEBUTTON_HOTBACK,
			NUM_GRADIENTS
		};
		enum {
			BORDER_SCREEN,
			BORDER_WINDOWFRAME,
			BORDER_WINDOWACTIVEFRAME,
			BORDER_STATUS,
			BORDER_STATUSITEM,
			BORDER_STATUSBOTTOMITEM,
			BORDER_STATUSHIGHLIGHT,
			BORDER_STATUSEVENTPROGRESS,
			BORDER_STATUSEVENTPROGRESSELAPSED,
			BORDER_TITLEBAR,
			BORDER_TITLEBARCAPTION,
			BORDER_TITLEBARICON,
			BORDER_TITLEBARHIGHLIGHT,
			BORDER_SIDEBAR,
			BORDER_SIDEBARITEM,
			BORDER_SIDEBARHIGHLIGHT,
			BORDER_SIDEBARCHECK,
			BORDER_PROGRAMGUIDESTATUS,
			BORDER_PANEL_TAB,
			BORDER_PANEL_CURTAB,
			BORDER_PANEL_TABMARGIN,
			BORDER_PANEL_TITLE,
			BORDER_INFORMATIONPANEL_EVENTINFO,
			BORDER_INFORMATIONPANEL_BUTTON,
			BORDER_INFORMATIONPANEL_HOTBUTTON,
			BORDER_PROGRAMLISTPANEL_CHANNEL,
			BORDER_PROGRAMLISTPANEL_CURCHANNEL,
			BORDER_PROGRAMLISTPANEL_CHANNELBUTTON,
			BORDER_PROGRAMLISTPANEL_CHANNELBUTTONHOT,
			BORDER_PROGRAMLISTPANEL_EVENT,
			BORDER_PROGRAMLISTPANEL_CUREVENT,
			BORDER_PROGRAMLISTPANEL_TITLE,
			BORDER_PROGRAMLISTPANEL_CURTITLE,
			BORDER_CHANNELPANEL_CHANNELNAME,
			BORDER_CHANNELPANEL_CURCHANNELNAME,
			BORDER_CHANNELPANEL_EVENTNAME1,
			BORDER_CHANNELPANEL_EVENTNAME2,
			BORDER_CHANNELPANEL_CUREVENTNAME1,
			BORDER_CHANNELPANEL_CUREVENTNAME2,
			BORDER_CHANNELPANEL_FEATUREDMARK,
			BORDER_CHANNELPANEL_PROGRESS,
			BORDER_CHANNELPANEL_CURPROGRESS,
			BORDER_CONTROLPANELITEM,
			BORDER_CONTROLPANELHIGHLIGHTITEM,
			BORDER_CONTROLPANELCHECKEDITEM,
			BORDER_PROGRAMGUIDE_FEATUREDMARK,
			BORDER_PROGRAMGUIDE_DATEBUTTON,
			BORDER_PROGRAMGUIDE_DATEBUTTON_CUR,
			BORDER_PROGRAMGUIDE_DATEBUTTON_HOT,
			BORDER_PROGRAMGUIDE_TIMEBUTTON,
			BORDER_PROGRAMGUIDE_TIMEBUTTON_CUR,
			BORDER_PROGRAMGUIDE_TIMEBUTTON_HOT,
			BORDER_PROGRAMGUIDE_FAVORITEBUTTON,
			BORDER_PROGRAMGUIDE_FAVORITEBUTTON_CUR,
			BORDER_PROGRAMGUIDE_FAVORITEBUTTON_HOT,
			NUM_BORDERS
		};

		struct GradientStyle
		{
			Theme::GradientType Type;
			Theme::GradientDirection Direction;

			bool operator==(const GradientStyle &Op) const noexcept = default;
		};

		struct FillStyle
		{
			Theme::FillType Type;
			GradientStyle Gradient;

			bool operator==(const FillStyle &Op) const noexcept = default;
		};

		enum class BaseSchemeType {
			Dark,
			Light,
		};

		enum class SaveFlag : unsigned int {
			None      = 0x0000U,
			NoDefault = 0x0001U,	// デフォルトと同じ設定を保存しない
			NoName    = 0x0002U,	// 名前を保存しない
			TVTEST_ENUM_FLAGS_TRAILER
		};

		CColorScheme();
		CColorScheme(const CColorScheme &ColorScheme);
		~CColorScheme();

		COLORREF GetColor(int Type) const;
		COLORREF GetColor(LPCTSTR pszText) const;
		bool SetColor(int Type, COLORREF Color);
		Theme::GradientType GetGradientType(int Gradient) const;
		Theme::GradientType GetGradientType(LPCTSTR pszText) const;
		bool SetGradientStyle(int Gradient, const GradientStyle &Style);
		bool GetGradientStyle(int Gradient, GradientStyle *pStyle) const;
		bool GetGradientStyle(int Gradient, Theme::GradientStyle *pStyle) const;
		bool GetFillStyle(int Gradient, Theme::FillStyle *pStyle) const;
		Theme::BorderType GetBorderType(int Border) const;
		bool SetBorderType(int Border, Theme::BorderType Type);
		bool GetBorderStyle(int Border, Theme::BorderStyle *pStyle) const;
		LPCTSTR GetName() const { return m_Name.c_str(); }
		void SetName(LPCTSTR pszName);
		LPCTSTR GetFileName() const { return m_FileName.c_str(); }
		bool IsLoadedFromFile() const { return !m_FileName.empty(); }
		bool Load(CSettings &Settings);
		bool Save(CSettings &Settings, SaveFlag Flags = SaveFlag::None) const;
		bool Load(LPCTSTR pszFileName);
		bool Save(LPCTSTR pszFileName, SaveFlag Flags = SaveFlag::None) const;
		bool SetFileName(LPCTSTR pszFileName);
		void SetBaseScheme(BaseSchemeType BaseScheme);
		BaseSchemeType GetBaseScheme() const { return m_BaseScheme; }
		void SetDefault();
		bool IsLoaded(int Type) const;
		void SetLoaded();
		bool CompareScheme(const CColorScheme &Scheme) const;

		static LPCTSTR GetColorName(int Type);
		static COLORREF GetDefaultColor(BaseSchemeType BaseScheme, int Type);
		static Theme::GradientType GetDefaultGradientType(int Gradient);
		static bool GetDefaultGradientStyle(int Gradient, GradientStyle *pStyle);
		static bool IsGradientDirectionEnabled(int Gradient);
		static Theme::BorderType GetDefaultBorderType(int Border);
		static int GetColorGradient(int Type);
		static int GetColorBorder(int Type);

	private:
		BaseSchemeType m_BaseScheme;
		COLORREF m_ColorList[NUM_COLORS];
		FillStyle m_FillList[NUM_GRADIENTS];
		Theme::BorderType m_BorderList[NUM_BORDERS];
		String m_Name;
		String m_FileName;
		struct ColorInfo
		{
			COLORREF DefaultColor;
			COLORREF DefaultLightColor;
			LPCTSTR pszText;
			LPCTSTR pszName;
		};
		struct GradientInfo
		{
			LPCTSTR pszText;
			Theme::GradientDirection Direction;
			bool fEnableDirection;
			int Color1;
			int Color2;
		};
		struct BorderInfo
		{
			LPCTSTR pszText;
			Theme::BorderType DefaultType;
			int Color;
		};

		DWORD m_LoadedFlags[(NUM_COLORS + 31) / 32];
		void SetLoadedFlag(int Color);
		static const ColorInfo m_ColorInfoList[NUM_COLORS];
		static const GradientInfo m_GradientInfoList[NUM_GRADIENTS];
		static const BorderInfo m_BorderInfoList[NUM_BORDERS];
		static const Theme::BorderType m_CustomDefaultBorderList[NUM_BORDERS];
	};

	class CColorSchemeList
	{
	public:
		int NumColorSchemes() const { return (int)m_List.size(); }
		bool Add(CColorScheme *pColorScheme);
		bool Insert(int Index, CColorScheme *pColorScheme);
		bool Load(LPCTSTR pszDirectory);
		void Clear();
		CColorScheme *GetColorScheme(int Index);
		bool SetColorScheme(int Index, const CColorScheme *pColorScheme);
		int FindByName(LPCTSTR pszName, int FirstIndex = 0) const;
		void SortByName();

	private:
		std::vector<std::unique_ptr<CColorScheme>> m_List;
	};

}	// namespace TVTest


#endif
