// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HeistGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HeistGameSession() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameSession_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameSession();
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_ASBZGameSessionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void APD3HeistGameSession::StaticRegisterNativesAPD3HeistGameSession()
	{
	}
	UClass* Z_Construct_UClass_APD3HeistGameSession_NoRegister()
	{
		return APD3HeistGameSession::StaticClass();
	}
	struct Z_Construct_UClass_APD3HeistGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APD3HeistGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameSessionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PD3HeistGameSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameSession.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APD3HeistGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APD3HeistGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APD3HeistGameSession_Statics::ClassParams = {
		&APD3HeistGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APD3HeistGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APD3HeistGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APD3HeistGameSession, 2223047727);
	template<> STARBREEZE_API UClass* StaticClass<APD3HeistGameSession>()
	{
		return APD3HeistGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APD3HeistGameSession(Z_Construct_UClass_APD3HeistGameSession, &APD3HeistGameSession::StaticClass, TEXT("/Script/Starbreeze"), TEXT("APD3HeistGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APD3HeistGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
