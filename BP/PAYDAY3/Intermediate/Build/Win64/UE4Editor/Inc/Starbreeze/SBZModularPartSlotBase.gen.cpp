// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartSlotBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartSlotBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USBZModularPartSlotBase::execGetApplierInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZModularPartApplier**)Z_Param__Result=P_THIS->GetApplierInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularPartSlotBase::execGetDisplayName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDisplayName);
		P_GET_UBOOL_REF(Z_Param_Out_OutHasText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDisplayName(Z_Param_Out_OutDisplayName,Z_Param_Out_OutHasText);
		P_NATIVE_END;
	}
	void USBZModularPartSlotBase::StaticRegisterNativesUSBZModularPartSlotBase()
	{
		UClass* Class = USBZModularPartSlotBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApplierInstance", &USBZModularPartSlotBase::execGetApplierInstance },
			{ "GetDisplayName", &USBZModularPartSlotBase::execGetDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics
	{
		struct SBZModularPartSlotBase_eventGetApplierInstance_Parms
		{
			USBZModularPartApplier* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartSlotBase_eventGetApplierInstance_Parms, ReturnValue), Z_Construct_UClass_USBZModularPartApplier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartSlotBase, nullptr, "GetApplierInstance", nullptr, nullptr, sizeof(SBZModularPartSlotBase_eventGetApplierInstance_Parms), Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics
	{
		struct SBZModularPartSlotBase_eventGetDisplayName_Parms
		{
			FText OutDisplayName;
			bool OutHasText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutDisplayName;
		static void NewProp_OutHasText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutHasText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutDisplayName = { "OutDisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartSlotBase_eventGetDisplayName_Parms, OutDisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutHasText_SetBit(void* Obj)
	{
		((SBZModularPartSlotBase_eventGetDisplayName_Parms*)Obj)->OutHasText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutHasText = { "OutHasText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularPartSlotBase_eventGetDisplayName_Parms), &Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutHasText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::NewProp_OutHasText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartSlotBase, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(SBZModularPartSlotBase_eventGetDisplayName_Parms), Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister()
	{
		return USBZModularPartSlotBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartSlotBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularPartClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ModularPartClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ApplierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplierPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ApplierPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWhenEquippedTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWhenEquippedTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplierInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplierInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartSlotBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZModularPartSlotBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZModularPartSlotBase_GetApplierInstance, "GetApplierInstance" }, // 1096817402
		{ &Z_Construct_UFunction_USBZModularPartSlotBase_GetDisplayName, "GetDisplayName" }, // 1014830209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartSlotBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ModularPartClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ModularPartClass = { "ModularPartClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, ModularPartClass), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ModularPartClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ModularPartClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierClass = { "ApplierClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, ApplierClass), Z_Construct_UClass_USBZModularPartApplier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierPriority = { "ApplierPriority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, ApplierPriority), METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_SlotWhenEquippedTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_SlotWhenEquippedTag = { "SlotWhenEquippedTag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, SlotWhenEquippedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_SlotWhenEquippedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_SlotWhenEquippedTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartSlotBase" },
		{ "ModuleRelativePath", "Public/SBZModularPartSlotBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierInstance = { "ApplierInstance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartSlotBase, ApplierInstance), Z_Construct_UClass_USBZModularPartApplier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModularPartSlotBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ModularPartClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_SlotWhenEquippedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartSlotBase_Statics::NewProp_ApplierInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartSlotBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartSlotBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartSlotBase_Statics::ClassParams = {
		&USBZModularPartSlotBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZModularPartSlotBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartSlotBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartSlotBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartSlotBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartSlotBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartSlotBase, 1299242555);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartSlotBase>()
	{
		return USBZModularPartSlotBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartSlotBase(Z_Construct_UClass_USBZModularPartSlotBase, &USBZModularPartSlotBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartSlotBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartSlotBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
