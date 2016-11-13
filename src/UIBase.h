#ifndef TVTEST_UI_BASE_H
#define TVTEST_UI_BASE_H


#include "Style.h"
#include "ThemeManager.h"
#include "ThemeDraw.h"
#include <vector>


namespace TVTest
{

	class CUIBase
	{
	public:
		CUIBase();
		virtual ~CUIBase() = 0;
		virtual void SetStyle(const Style::CStyleManager *pStyleManager);
		virtual void NormalizeStyle(
			const Style::CStyleManager *pStyleManager,
			const Style::CStyleScaling *pStyleScaling);
		virtual void SetTheme(const Theme::CThemeManager *pThemeManager);
		void SetStyleScaling(Style::CStyleScaling *pStyleScaling);
		Style::CStyleScaling *GetStyleScaling() { return m_pStyleScaling; }
		const Style::CStyleScaling *GetStyleScaling() const { return m_pStyleScaling; }
		void UpdateStyle();
		void RegisterUIChild(CUIBase *pChild);
		void RemoveUIChild(CUIBase *pChild);
		void ClearUIChildList();

		static void ResetDefaultFont();

	protected:
		void InitializeUI();
		const Style::CStyleManager *GetStyleManager() const;
		void ResetStyle();
		void UpdateChildrenStyle();
		virtual void ApplyStyle() {}
		virtual void RealizeStyle() {}
		virtual bool GetDefaultFont(Style::Font *pFont) const;
		bool GetSystemFont(DrawUtil::FontType Type,Style::Font *pFont) const;
		bool CreateDrawFont(const Style::Font &Font,DrawUtil::CFont *pDrawFont) const;
		bool CreateDrawFontAndBoldFont(
			const Style::Font &Font,DrawUtil::CFont *pDrawFont,DrawUtil::CFont *pBoldFont) const;
		bool CreateDefaultFont(DrawUtil::CFont *pDefaultFont) const;
		bool CreateDefaultFontAndBoldFont(DrawUtil::CFont *pDefaultFont,DrawUtil::CFont *pBoldFont) const;
		HCURSOR GetActionCursor() const;
		HCURSOR GetLinkCursor() const;
		Theme::CThemeDraw BeginThemeDraw(HDC hdc) const;
		bool ConvertBorderWidthsInPixels(Theme::BorderStyle *pStyle) const;
		bool GetBorderWidthsInPixels(const Theme::BorderStyle &Style,RECT *pWidths) const;
		int GetHairlineWidth() const;
		void InitStyleScaling(HWND hwnd,bool fNonClientScaling);
		void OnDPIChanged(HWND hwnd,WPARAM wParam,LPARAM lParam);

		Style::CStyleScaling *m_pStyleScaling;
		std::vector<CUIBase*> m_UIChildList;

	private:
		static Style::Font m_DefaultFont;
		static bool m_fValidDefaultFont;
	};

}	// namespace TVTest


#endif	// ndef TVTEST_UI_BASE_H
