class CfgFunctions {
	class TWC_Incorporeal {
		class functions {
			file = "twc_incorporeal\functions";
			
			/** INIT **/
			class clientInit {};
			class serverInit { postInit = 1; };
			
			/** INTRO **/
			class startIntro {};
			class startLegacyIntro {};
			class getIntroSong {};
			class getIntroData {};
			
			/** DEATH SCREEN **/
			class bestGuessDeath {};
			class getDeathData {};
			
			/** OUTRO **/
			
			/** HELPER FUNCTIONS **/
			class getGroupData {};
			class fadeInSound {};
			
			/** Refactor! **/
			class clientPostInit {};
			
			class startStaticCamera {};
			class startCamIntro {};
		};
	};
};