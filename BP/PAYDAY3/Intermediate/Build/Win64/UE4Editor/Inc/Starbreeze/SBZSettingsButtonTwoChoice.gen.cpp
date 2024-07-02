// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonTwoChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonTwoChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonTwoChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonTwoChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonTwoChoice::execSetOptionOneName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InOptionOneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionOneName(Z_Param_Out_InOptionOneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonTwoChoice::execSetOptionTwoName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InOptionTwoName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionTwoName(Z_Param_Out_InOptionTwoName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonTwoChoice::execSetToggleValue)
	{
		P_GET_UBOOL(Z_Param_bIsToggled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleValue(Z_Param_bIsToggled);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsButtonTwoChoice_OptionOneNameChanged = FName(TEXT("OptionOneNameChanged"));
	void USBZSettingsButtonTwoChoice::OptionOneNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonTwoChoice_OptionOneNameChanged),NULL);
	}
	static FName NAME_USBZSettingsButtonTwoChoice_OptionTwoNameChanged = FName(TEXT("OptionTwoNameChanged"));
	void USBZSettingsButtonTwoChoice::OptionTwoNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonTwoChoice_OptionTwoNameChanged),NULL);
	}
	void USBZSettingsButtonTwoChoice::StaticRegisterNativesUSBZSettingsButtonTwoChoice()
	{
		UClass* Class = USBZSettingsButtonTwoChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOptionOneName", &USBZSettingsButtonTwoChoice::execSetOptionOneName },
			{ "SetOptionTwoName", &USBZSettingsButtonTwoChoice::execSetOptionTwoName },
			{ "SetToggleValue", &USBZSettingsButtonTwoChoice::execSetToggleValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonTwoChoice, nullptr, "OptionOneNameChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonTwoChoice, nullptr, "OptionTwoNameChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics
	{
		struct SBZSettingsButtonTwoChoice_eventSetOptionOneName_Parms
		{
			FText InOptionOneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptionOneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InOptionOneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::NewProp_InOptionOneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::NewProp_InOptionOneName = { "InOptionOneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonTwoChoice_eventSetOptionOneName_Parms, InOptionOneName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::NewProp_InOptionOneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::NewProp_InOptionOneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::NewProp_InOptionOneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonTwoChoice, nullptr, "SetOptionOneName", nullptr, nullptr, sizeof(SBZSettingsButtonTwoChoice_eventSetOptionOneName_Parms), Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics
	{
		struct SBZSettingsButtonTwoChoice_eventSetOptionTwoName_Parms
		{
			FText InOptionTwoName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptionTwoName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InOptionTwoName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::NewProp_InOptionTwoName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::NewProp_InOptionTwoName = { "InOptionTwoName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonTwoChoice_eventSetOptionTwoName_Parms, InOptionTwoName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::NewProp_InOptionTwoName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::NewProp_InOptionTwoName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::NewProp_InOptionTwoName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonTwoChoice, nullptr, "SetOptionTwoName", nullptr, nullptr, sizeof(SBZSettingsButtonTwoChoice_eventSetOptionTwoName_Parms), Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics
	{
		struct SBZSettingsButtonTwoChoice_eventSetToggleValue_Parms
		{
			bool bIsToggled;
		};
		static void NewProp_bIsToggled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsToggled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::NewProp_bIsToggled_SetBit(void* Obj)
	{
		((SBZSettingsButtonTwoChoice_eventSetToggleValue_Parms*)Obj)->bIsToggled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::NewProp_bIsToggled = { "bIsToggled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsButtonTwoChoice_eventSetToggleValue_Parms), &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::NewProp_bIsToggled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::NewProp_bIsToggled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonTwoChoice, nullptr, "SetToggleValue", nullptr, nullptr, sizeof(SBZSettingsButtonTwoChoice_eventSetToggleValue_Parms), Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonTwoChoice_NoRegister()
	{
		return USBZSettingsButtonTwoChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionOneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OptionOneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionTwoName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OptionTwoName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleValue_MetaData[];
#endif
		static void NewProp_bToggleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionOneNameChanged, "OptionOneNameChanged" }, // 3507712244
		{ &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_OptionTwoNameChanged, "OptionTwoNameChanged" }, // 1397837890
		{ &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionOneName, "SetOptionOneName" }, // 2523005495
		{ &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetOptionTwoName, "SetOptionTwoName" }, // 1405283293
		{ &Z_Construct_UFunction_USBZSettingsButtonTwoChoice_SetToggleValue, "SetToggleValue" }, // 955131612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonTwoChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionOneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonTwoChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionOneName = { "OptionOneName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonTwoChoice, OptionOneName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionOneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionOneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionTwoName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonTwoChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionTwoName = { "OptionTwoName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonTwoChoice, OptionTwoName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionTwoName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionTwoName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonTwoChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonTwoChoice.h" },
	};
#endif
	void Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue_SetBit(void* Obj)
	{
		((USBZSettingsButtonTwoChoice*)Obj)->bToggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue = { "bToggleValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSettingsButtonTwoChoice), &Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionOneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_OptionTwoName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::NewProp_bToggleValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonTwoChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::ClassParams = {
		&USBZSettingsButtonTwoChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonTwoChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonTwoChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonTwoChoice, 3854239172);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonTwoChoice>()
	{
		return USBZSettingsButtonTwoChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonTwoChoice(Z_Construct_UClass_USBZSettingsButtonTwoChoice, &USBZSettingsButtonTwoChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonTwoChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonTwoChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
