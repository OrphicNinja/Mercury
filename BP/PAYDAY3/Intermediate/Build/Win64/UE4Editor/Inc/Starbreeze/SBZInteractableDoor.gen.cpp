// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableDoor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableDoor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableDoor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableGate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
// End Cross Module References
	DEFINE_FUNCTION(ASBZInteractableDoor::execHandleBreachPropDamageHits)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PoolComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hits);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBreachPropDamageHits(Z_Param_PoolComponent,Z_Param_Hits,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	void ASBZInteractableDoor::StaticRegisterNativesASBZInteractableDoor()
	{
		UClass* Class = ASBZInteractableDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBreachPropDamageHits", &ASBZInteractableDoor::execHandleBreachPropDamageHits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics
	{
		struct SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms
		{
			UActorComponent* PoolComponent;
			int32 Hits;
			bool bDoCosmetics;
			FSBZPropDamageContext DamageContext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hits;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_PoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms, PoolComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_PoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_PoolComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms, Hits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms), &Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_PoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableDoor, nullptr, "HandleBreachPropDamageHits", nullptr, nullptr, sizeof(SBZInteractableDoor_eventHandleBreachPropDamageHits_Parms), Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZInteractableDoor_NoRegister()
	{
		return ASBZInteractableDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZInteractableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlammedOpenAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlammedOpenAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachPropDamageSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreachPropDamageSelector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZInteractableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZInteractableGate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZInteractableDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZInteractableDoor_HandleBreachPropDamageHits, "HandleBreachPropDamageHits" }, // 3003212348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractableDoor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableDoor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_SelectedRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableDoor" },
		{ "ModuleRelativePath", "Public/SBZInteractableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_SelectedRoom = { "SelectedRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractableDoor, SelectedRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_SelectedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_SelectedRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_MaxSlammedOpenAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableDoor" },
		{ "ModuleRelativePath", "Public/SBZInteractableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_MaxSlammedOpenAngle = { "MaxSlammedOpenAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractableDoor, MaxSlammedOpenAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_MaxSlammedOpenAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_MaxSlammedOpenAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_BreachPropDamageSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableDoor" },
		{ "ModuleRelativePath", "Public/SBZInteractableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_BreachPropDamageSelector = { "BreachPropDamageSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractableDoor, BreachPropDamageSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_BreachPropDamageSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_BreachPropDamageSelector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZInteractableDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_SelectedRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_MaxSlammedOpenAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableDoor_Statics::NewProp_BreachPropDamageSelector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZInteractableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZInteractableDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZInteractableDoor_Statics::ClassParams = {
		&ASBZInteractableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZInteractableDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableDoor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZInteractableDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZInteractableDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZInteractableDoor, 2905268811);
	template<> STARBREEZE_API UClass* StaticClass<ASBZInteractableDoor>()
	{
		return ASBZInteractableDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZInteractableDoor(Z_Construct_UClass_ASBZInteractableDoor, &ASBZInteractableDoor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZInteractableDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZInteractableDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
