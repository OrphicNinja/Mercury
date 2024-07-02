// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAudioScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAudioScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAudioScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAudioScreen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEventReactorState();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAudioScreen::execOnAudioEventComplete)
	{
		P_GET_ENUM(EAkCallbackType,Z_Param_Type);
		P_GET_OBJECT(UAkCallbackInfo,Z_Param_CallbackInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAudioEventComplete(EAkCallbackType(Z_Param_Type),Z_Param_CallbackInfo);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAudioScreen_BP_Activate = FName(TEXT("BP_Activate"));
	void ASBZAudioScreen::BP_Activate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAudioScreen_BP_Activate),NULL);
	}
	static FName NAME_ASBZAudioScreen_BP_Deactivate = FName(TEXT("BP_Deactivate"));
	void ASBZAudioScreen::BP_Deactivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAudioScreen_BP_Deactivate),NULL);
	}
	static FName NAME_ASBZAudioScreen_BP_OnReactorStateChanged = FName(TEXT("BP_OnReactorStateChanged"));
	void ASBZAudioScreen::BP_OnReactorStateChanged(ESBZEventReactorState NewState, bool bDoCosmetics)
	{
		SBZAudioScreen_eventBP_OnReactorStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAudioScreen_BP_OnReactorStateChanged),&Parms);
	}
	void ASBZAudioScreen::StaticRegisterNativesASBZAudioScreen()
	{
		UClass* Class = ASBZAudioScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAudioEventComplete", &ASBZAudioScreen::execOnAudioEventComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAudioScreen, nullptr, "BP_Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAudioScreen_BP_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAudioScreen_BP_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAudioScreen, nullptr, "BP_Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAudioScreen_eventBP_OnReactorStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAudioScreen_eventBP_OnReactorStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAudioScreen_eventBP_OnReactorStateChanged_Parms), &Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAudioScreen, nullptr, "BP_OnReactorStateChanged", nullptr, nullptr, sizeof(SBZAudioScreen_eventBP_OnReactorStateChanged_Parms), Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics
	{
		struct SBZAudioScreen_eventOnAudioEventComplete_Parms
		{
			EAkCallbackType Type;
			UAkCallbackInfo* CallbackInfo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAudioScreen_eventOnAudioEventComplete_Parms, Type), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAudioScreen_eventOnAudioEventComplete_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::NewProp_CallbackInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAudioScreen, nullptr, "OnAudioEventComplete", nullptr, nullptr, sizeof(SBZAudioScreen_eventOnAudioEventComplete_Parms), Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAudioScreen_NoRegister()
	{
		return ASBZAudioScreen::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAudioScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentReactorState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentReactorState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentReactorState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAudioScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAudioScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAudioScreen_BP_Activate, "BP_Activate" }, // 1485720159
		{ &Z_Construct_UFunction_ASBZAudioScreen_BP_Deactivate, "BP_Deactivate" }, // 2201934236
		{ &Z_Construct_UFunction_ASBZAudioScreen_BP_OnReactorStateChanged, "BP_OnReactorStateChanged" }, // 1035115631
		{ &Z_Construct_UFunction_ASBZAudioScreen_OnAudioEventComplete, "OnAudioEventComplete" }, // 1288803677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAudioScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAudioScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAudioScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAudioScreen, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAudioScreen" },
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAudioScreen, CurrentRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentRoom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAudioScreen" },
		{ "ModuleRelativePath", "Public/SBZAudioScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState = { "CurrentReactorState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAudioScreen, CurrentReactorState), Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, METADATA_PARAMS(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAudioScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAudioScreen_Statics::NewProp_CurrentReactorState,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAudioScreen_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAudioScreen, ISBZRoomVolumeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAudioScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAudioScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAudioScreen_Statics::ClassParams = {
		&ASBZAudioScreen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAudioScreen_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAudioScreen_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAudioScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAudioScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAudioScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAudioScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAudioScreen, 3489181741);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAudioScreen>()
	{
		return ASBZAudioScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAudioScreen(Z_Construct_UClass_ASBZAudioScreen, &ASBZAudioScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAudioScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAudioScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
