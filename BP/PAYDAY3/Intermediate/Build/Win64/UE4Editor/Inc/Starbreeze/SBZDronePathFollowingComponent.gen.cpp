// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDronePathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDronePathFollowingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDronePathFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDronePathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings();
// End Cross Module References
	DEFINE_FUNCTION(USBZDronePathFollowingComponent::execFollowSpline)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
		P_GET_UBOOL(Z_Param_bIsSpawnSpline);
		P_GET_UBOOL(Z_Param_bIsPathContainingLastPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowSpline(Z_Param_SplineComponent,Z_Param_bIsSpawnSpline,Z_Param_bIsPathContainingLastPoint);
		P_NATIVE_END;
	}
	void USBZDronePathFollowingComponent::StaticRegisterNativesUSBZDronePathFollowingComponent()
	{
		UClass* Class = USBZDronePathFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FollowSpline", &USBZDronePathFollowingComponent::execFollowSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics
	{
		struct SBZDronePathFollowingComponent_eventFollowSpline_Parms
		{
			const USplineComponent* SplineComponent;
			bool bIsSpawnSpline;
			bool bIsPathContainingLastPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static void NewProp_bIsSpawnSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawnSpline;
		static void NewProp_bIsPathContainingLastPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPathContainingLastPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDronePathFollowingComponent_eventFollowSpline_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_SplineComponent_MetaData)) };
	void Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsSpawnSpline_SetBit(void* Obj)
	{
		((SBZDronePathFollowingComponent_eventFollowSpline_Parms*)Obj)->bIsSpawnSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsSpawnSpline = { "bIsSpawnSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDronePathFollowingComponent_eventFollowSpline_Parms), &Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsSpawnSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsPathContainingLastPoint_SetBit(void* Obj)
	{
		((SBZDronePathFollowingComponent_eventFollowSpline_Parms*)Obj)->bIsPathContainingLastPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsPathContainingLastPoint = { "bIsPathContainingLastPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDronePathFollowingComponent_eventFollowSpline_Parms), &Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsPathContainingLastPoint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsSpawnSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::NewProp_bIsPathContainingLastPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDronePathFollowingComponent, nullptr, "FollowSpline", nullptr, nullptr, sizeof(SBZDronePathFollowingComponent_eventFollowSpline_Parms), Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDronePathFollowingComponent_NoRegister()
	{
		return USBZDronePathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZDronePathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAheadDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAheadDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPitchLookAheadDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPitchLookAheadDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVectorComputationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVectorComputationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDronePathFollowingComponent_FollowSpline, "FollowSpline" }, // 2941810360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZDronePathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_LookAheadDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_LookAheadDistance = { "LookAheadDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDronePathFollowingComponent, LookAheadDistance), METADATA_PARAMS(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_LookAheadDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_LookAheadDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_PathFocusDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_PathFocusDistance = { "PathFocusDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDronePathFollowingComponent, PathFocusDistance), METADATA_PARAMS(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_PathFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_PathFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_MinPitchLookAheadDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_MinPitchLookAheadDistance = { "MinPitchLookAheadDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDronePathFollowingComponent, MinPitchLookAheadDistance), METADATA_PARAMS(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_MinPitchLookAheadDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_MinPitchLookAheadDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_UpVectorComputationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZDronePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_UpVectorComputationSettings = { "UpVectorComputationSettings", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDronePathFollowingComponent, UpVectorComputationSettings), Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings, METADATA_PARAMS(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_UpVectorComputationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_UpVectorComputationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_LookAheadDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_PathFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_MinPitchLookAheadDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::NewProp_UpVectorComputationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDronePathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::ClassParams = {
		&USBZDronePathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDronePathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDronePathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDronePathFollowingComponent, 2200521068);
	template<> STARBREEZE_API UClass* StaticClass<USBZDronePathFollowingComponent>()
	{
		return USBZDronePathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDronePathFollowingComponent(Z_Construct_UClass_USBZDronePathFollowingComponent, &USBZDronePathFollowingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDronePathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDronePathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
