#pragma once
#include <Interpret/SmartView/SmartViewParser.h>
#include <MAPIDefs.h>

namespace smartview
{
	class PropertyStruct : public SmartViewParser
	{
	public:
		PropertyStruct();

	private:
		void Parse() override;
		_Check_return_ std::wstring ToStringInternal() override;

		DWORD m_PropCount;
		LPSPropValue m_Prop;
	};

	_Check_return_ std::wstring PropsToString(DWORD PropCount, LPSPropValue Prop);
}