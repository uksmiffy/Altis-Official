class Life_Vehicle_Shop_v2
{
	idd = 2300;
	name="life_vehicle_shop";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "ctrlShow [2330,false];";
	onUnLoad = "[] call life_fnc_vehicleShopEnd3DPreview";

	class controlsBackground
	{
		class MainBackground: Life_RscText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.66 * safezoneH;
		};

		class SecondBackground: Life_RscText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0.809375 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.341 * safezoneH;
		};

		class Title : Life_RscTitle
		{
			idc = 2301;
			text = "";
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class VehicleTitleBox: Life_RscText
		{
			idc = -1;
			text = "$STR_GUI_ShopStock";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class VehicleInfoHeader: Life_RscText
		{
			idc = 2330;
			text = "$STR_GUI_VehInfo";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.819688 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class CloseBtn: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class RentCar: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_RentVeh";
			onButtonClick = "[false] spawn life_fnc_vehicleShopBuy;";
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class BuyCar: life_RscButtonMenu
		{
			idc = 2309;
			text = "$STR_Global_Buy";
			onButtonClick = "[true] spawn life_fnc_vehicleShopBuy;";
			x = 0.0978125 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};

	class controls
	{
		class VehicleList: Life_RscListBox
		{
			idc = 2302;
			text = "";
			sizeEx = 0.04;
			colorBackground[] = {0.1,0.1,0.1,0.9};
			onLBSelChanged = "_this call life_fnc_vehicleShopLBChange";
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.55 * safezoneH;
		};

		class ColorList: Life_RscCombo
		{
			idc = 2304;
			onLBSelChanged = "[] spawn life_fnc_vehiclecolor3DRefresh;";
			x = 0.0978125 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 2303;
			text = "";
			sizeEx = 0.035;
			x = 0.819688 * safezoneW + safezoneX;
			y = 0.104 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.275 * safezoneH;
		};
	};
};
