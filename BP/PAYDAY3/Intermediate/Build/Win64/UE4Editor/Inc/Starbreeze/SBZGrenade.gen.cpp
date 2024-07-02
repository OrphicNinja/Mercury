// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZGrenade::execMulticast_ExplosionInHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ExplosionInHand_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenade::execMulticast_OnServerCollision)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnServerCollision_Implementation(Z_Param_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenade::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenade::execOnCollisionComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollisionComponentHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_ASBZGrenade_Multicast_ExplosionInHand = FName(TEXT("Multicast_ExplosionInHand"));
	void ASBZGrenade::Multicast_ExplosionInHand()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenade_Multicast_ExplosionInHand),NULL);
	}
	static FName NAME_ASBZGrenade_Multicast_OnServerCollision = FName(TEXT("Multicast_OnServerCollision"));
	void ASBZGrenade::Multicast_OnServerCollision(FVector_NetQuantize const& InLocation)
	{
		SBZGrenade_eventMulticast_OnServerCollision_Parms Parms;
		Parms.InLocation=InLocation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenade_Multicast_OnServerCollision),&Parms);
	}
	static FName NAME_ASBZGrenade_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZGrenade::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZGrenade_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenade_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZGrenade_OnArmed = FName(TEXT("OnArmed"));
	void ASBZGrenade::OnArmed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenade_OnArmed),NULL);
	}
	static FName NAME_ASBZGrenade_OnExplosion = FName(TEXT("OnExplosion"));
	void ASBZGrenade::OnExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenade_OnExplosion),NULL);
	}
	void ASBZGrenade::StaticRegisterNativesASBZGrenade()
	{
		UClass* Class = ASBZGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ExplosionInHand", &ASBZGrenade::execMulticast_ExplosionInHand },
			{ "Multicast_OnServerCollision", &ASBZGrenade::execMulticast_OnServerCollision },
			{ "Multicast_ReplicateExplosion", &ASBZGrenade::execMulticast_ReplicateExplosion },
			{ "OnCollisionComponentHit", &ASBZGrenade::execOnCollisionComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "Multicast_ExplosionInHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventMulticast_OnServerCollision_Parms, InLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "Multicast_OnServerCollision", nullptr, nullptr, sizeof(SBZGrenade_eventMulticast_OnServerCollision_Parms), Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZGrenade_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "OnArmed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_OnArmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_OnArmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics
	{
		struct SBZGrenade_eventOnCollisionComponentHit_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventOnCollisionComponentHit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventOnCollisionComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventOnCollisionComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventOnCollisionComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenade_eventOnCollisionComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "OnCollisionComponentHit", nullptr, nullptr, sizeof(SBZGrenade_eventOnCollisionComponentHit_Parms), Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenade, nullptr, "OnExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenade_OnExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenade_OnExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZGrenade_NoRegister()
	{
		return ASBZGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorAbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorAbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIVisibilityNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingDataExplosionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingDataExplosionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZThrowable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZGrenade_Multicast_ExplosionInHand, "Multicast_ExplosionInHand" }, // 4107814795
		{ &Z_Construct_UFunction_ASBZGrenade_Multicast_OnServerCollision, "Multicast_OnServerCollision" }, // 1089744888
		{ &Z_Construct_UFunction_ASBZGrenade_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 1949275757
		{ &Z_Construct_UFunction_ASBZGrenade_OnArmed, "OnArmed" }, // 3026021551
		{ &Z_Construct_UFunction_ASBZGrenade_OnCollisionComponentHit, "OnCollisionComponentHit" }, // 665012364
		{ &Z_Construct_UFunction_ASBZGrenade_OnExplosion, "OnExplosion" }, // 3123500675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenade_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenade_Statics::NewProp_InstigatorAbilitySystemComponent = { "InstigatorAbilitySystemComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenade, InstigatorAbilitySystemComponent), Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenade_Statics::NewProp_AIVisibilityNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenade" },
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenade_Statics::NewProp_AIVisibilityNode = { "AIVisibilityNode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenade, AIVisibilityNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_AIVisibilityNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_AIVisibilityNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenade_Statics::NewProp_PendingDataExplosionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenade" },
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenade_Statics::NewProp_PendingDataExplosionResult = { "PendingDataExplosionResult", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenade, PendingDataExplosionResult), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_PendingDataExplosionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_PendingDataExplosionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenade_Statics::NewProp_DetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenade_Statics::NewProp_DetonationEffect = { "DetonationEffect", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenade, DetonationEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_DetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::NewProp_DetonationEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenade_Statics::NewProp_InstigatorAbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenade_Statics::NewProp_AIVisibilityNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenade_Statics::NewProp_PendingDataExplosionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenade_Statics::NewProp_DetonationEffect,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZGrenade_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZGrenade, ISBZExplosive), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGrenade_Statics::ClassParams = {
		&ASBZGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZGrenade_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGrenade, 3534371909);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGrenade>()
	{
		return ASBZGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGrenade(Z_Construct_UClass_ASBZGrenade, &ASBZGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
