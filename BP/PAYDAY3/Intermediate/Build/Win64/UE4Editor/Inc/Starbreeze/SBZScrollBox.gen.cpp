// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZScrollBox() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZScrollBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZScrollBox();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZScrollBox::execSetCustomFocus)
	{
		P_GET_UBOOL(Z_Param_bInIsCustomFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomFocus(Z_Param_bInIsCustomFocus);
		P_NATIVE_END;
	}
	void USBZScrollBox::StaticRegisterNativesUSBZScrollBox()
	{
		UClass* Class = USBZScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCustomFocus", &USBZScrollBox::execSetCustomFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics
	{
		struct SBZScrollBox_eventSetCustomFocus_Parms
		{
			bool bInIsCustomFocus;
		};
		static void NewProp_bInIsCustomFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsCustomFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::NewProp_bInIsCustomFocus_SetBit(void* Obj)
	{
		((SBZScrollBox_eventSetCustomFocus_Parms*)Obj)->bInIsCustomFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::NewProp_bInIsCustomFocus = { "bInIsCustomFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZScrollBox_eventSetCustomFocus_Parms), &Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::NewProp_bInIsCustomFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::NewProp_bInIsCustomFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZScrollBox, nullptr, "SetCustomFocus", nullptr, nullptr, sizeof(SBZScrollBox_eventSetCustomFocus_Parms), Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZScrollBox_SetCustomFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZScrollBox_SetCustomFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZScrollBox_NoRegister()
	{
		return USBZScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_USBZScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisYName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputAxisYName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSpeedY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSpeedY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputAxisDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCustomFocus_MetaData[];
#endif
		static void NewProp_bIsCustomFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCustomFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScrollBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZScrollBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZScrollBox_SetCustomFocus, "SetCustomFocus" }, // 2588359684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZScrollBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZScrollBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZScrollBox, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisYName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZScrollBox" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisYName = { "InputAxisYName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZScrollBox, InputAxisYName), METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisYName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisYName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::NewProp_ScrollSpeedY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZScrollBox" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZScrollBox_Statics::NewProp_ScrollSpeedY = { "ScrollSpeedY", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZScrollBox, ScrollSpeedY), METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_ScrollSpeedY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_ScrollSpeedY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZScrollBox" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisDeadZone = { "InputAxisDeadZone", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZScrollBox, InputAxisDeadZone), METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZScrollBox" },
		{ "ModuleRelativePath", "Public/SBZScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus_SetBit(void* Obj)
	{
		((USBZScrollBox*)Obj)->bIsCustomFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus = { "bIsCustomFocus", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZScrollBox), &Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZScrollBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisYName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZScrollBox_Statics::NewProp_ScrollSpeedY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZScrollBox_Statics::NewProp_InputAxisDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZScrollBox_Statics::NewProp_bIsCustomFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZScrollBox_Statics::ClassParams = {
		&USBZScrollBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZScrollBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZScrollBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZScrollBox, 709883638);
	template<> STARBREEZE_API UClass* StaticClass<USBZScrollBox>()
	{
		return USBZScrollBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZScrollBox(Z_Construct_UClass_USBZScrollBox, &USBZScrollBox::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
