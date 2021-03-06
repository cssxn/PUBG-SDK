#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.28) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C
// 0x0074 (0x04B4 - 0x0440)
class AP_Environment_Smoke_03_BP_Lobby_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x0440(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x044C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Color;                                                    // 0x0458(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SizeMax;                                                  // 0x0468(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SizeMin;                                                  // 0x0474(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMax;                                              // 0x0480(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMin;                                              // 0x048C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeLow;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PannerTime;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PannerTimeLow;                                            // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationRateMax;                                          // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationRateMin;                                          // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
