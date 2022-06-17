#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SocialParty.EJoinPartyMethod
	 */
	enum class EJoinPartyMethod : uint8_t
	{
		None               = 0,
		PlatformInvitation = 1,
		InGameInvitation   = 2,
		JoinRequest        = 3,
		MAX                = 4
	};

	/**
	 * Enum SocialParty.EPartyBusyReason
	 */
	enum class EPartyBusyReason : uint8_t
	{
		None                                = 0,
		CreatingParty                       = 1,
		LeavingParty                        = 2,
		SyncingParty                        = 3,
		DestroyingParty                     = 4,
		InvitingPlayer                      = 5,
		AcceptingPartyInvite                = 6,
		RejectingPartyInvite                = 7,
		CancelingPartyInvite                = 8,
		RequestingJoinParty                 = 9,
		AcceptingRequestJoinParty           = 10,
		RejectingRequestJoinParty           = 11,
		CancelingRequestJoinParty           = 12,
		AcceptingPlatformInvite             = 13,
		KickingPlayerFromParty              = 14,
		LeavingPartyFromKick                = 15,
		CreatingPartyPlatformSession        = 16,
		LeavingCrossplatformPlatformSession = 17,
		WaitingForPlatformSessionInfo       = 18,
		ProcessingPlatformSession           = 19,
		MAX                                 = 20
	};

	/**
	 * Enum SocialParty.EPartyError
	 */
	enum class EPartyError : uint8_t
	{
		None                                                            = 0,
		CreatePartyFail                                                 = 1,
		CreatePartyFail_PlayerAlreadyInParty                            = 2,
		ConnectionToPartyManagementLost                                 = 3,
		AcceptInvitationFail                                            = 4,
		AcceptInvitationFail_InvitationExpired                          = 5,
		AcceptInvitationFail_PartyIsFull                                = 6,
		AcceptInvitationFail_PartyDoesNotExists                         = 7,
		AcceptInvitationFail_VersionMismatch                            = 8,
		AcceptInvitationFail_StreamingInstallationIncomplete            = 9,
		AcceptInvitationFail_PartyAlreadyInMatchmaking                  = 10,
		AcceptInvitationFail_AllPartyMembersAreInMatch                  = 11,
		RejectInvitationFail                                            = 12,
		RejectInvitationFail_PartyDoesNotExists                         = 13,
		InvitationFail                                                  = 14,
		InvitationFail_PartyDoesNotExists                               = 15,
		InvitationFail_PlayerAlreadyInParty                             = 16,
		InvitationFail_NotFriendsWithUser                               = 17,
		JoinRequestFail                                                 = 18,
		JoinRequestFail_PartyDoesNotExists                              = 19,
		JoinRequestFail_PlayerAlreadyInPartyOrPartyFull                 = 20,
		JoinRequestFail_BannedFromParty                                 = 21,
		JoinRequestFail_FriendNotInParty                                = 22,
		JoinRequestFail_PartyIsPrivate                                  = 23,
		JoinRequestAcceptedFail                                         = 24,
		JoinRequestAcceptedFail_PartyDoesNotExists                      = 25,
		AcceptJoinRequestFail                                           = 26,
		AcceptJoinRequestFail_RequestNotFound                           = 27,
		AcceptJoinRequestFail_PartyDoesNotExists                        = 28,
		RejectJoinRequestFail                                           = 29,
		RejectJoinRequestFail_RequestNotFound                           = 30,
		RejectJoinRequestFail_PartyDoesNotExists                        = 31,
		CancelJoinRequestFail                                           = 32,
		CancelJoinRequestFail_RequestNotFound                           = 33,
		RealTimeMessagingDisconnected                                   = 34,
		FriendBlocked_UnableToJoinParty                                 = 35,
		FriendBlocked_UnableToRemainInParty                             = 36,
		CancelInvitationFail                                            = 37,
		CancelInvitationFail_PartyDoesNotExists                         = 38,
		SendPartyChatMessageFail                                        = 39,
		SendPartyChatMessageFail_PartyDoesNotExists                     = 40,
		SendPartyChatMessageFail_MessageNotAllowed                      = 41,
		InvitationValidationError                                       = 42,
		InvitationValidationError_StandardInviteFlowButActiveCrowdPlay  = 43,
		InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay = 44,
		InvitationValidationError_PartyIsFull                           = 45,
		InvitationValidationError_PartyDoesNotExists                    = 46,
		InvitationValidationError_VersionMismatch                       = 47,
		InvitationValidationError_StreamingInstallationIncomplete       = 48,
		InvitationValidationError_FriendBlocked                         = 49,
		InvitationValidationError_InsufficientPrivileges                = 50,
		InvitationValidationError_PlayerBanned                          = 51,
		InvitationValidationError_LocalCrossplayIncompatibility         = 52,
		InvitationValidationError_RemoteCrossplayIncompatibility        = 53,
		InvitationValidationError_ListenServerCrossplayIncompatibility  = 54,
		RemovePlayerFromPartyFail                                       = 55,
		JoinFail_PlayerAlreadyInParty                                   = 56,
		UnknownError                                                    = 57,
		MAX                                                             = 58
	};

	/**
	 * Enum SocialParty.EPartyPostMatchmakingState
	 */
	enum class EPartyPostMatchmakingState : uint8_t
	{
		None       = 0,
		InProgress = 1,
		Completed  = 2,
		Error      = 3,
		MAX        = 4
	};

	/**
	 * Enum SocialParty.EPartyPostMatchmakingRole
	 */
	enum class EPartyPostMatchmakingRole : uint8_t
	{
		None   = 0,
		Client = 1,
		Host   = 2,
		MAX    = 3
	};

	/**
	 * Enum SocialParty.EMatchmakingState
	 */
	enum class EMatchmakingState : uint8_t
	{
		None       = 0,
		Searching  = 1,
		MatchFound = 2,
		Error      = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SocialParty.SocialPartyMember
	 * Size -> 0x00B0
	 */
	struct FSocialPartyMember
	{
	public:
		unsigned char                                              UnknownData_E6HA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        _customizationMesh;                                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              _playerName;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _platformSessionId;                                      // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _uniquePlayerId;                                         // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _playerRank;                                             // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _characterLevel;                                         // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _prestigeLevel;                                          // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _gameRole;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _characterId;                                            // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _powerId;                                                // 0x005C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _location;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _ready;                                                  // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _crossplayAllowed;                                       // 0x006D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2MAO[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _playerPlatform;                                         // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _playerProvider;                                         // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _matchId;                                                // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPartyPostMatchmakingRole                                  _postMatchmakingRole;                                    // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPartyPostMatchmakingState                                 _postMatchmakingState;                                   // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _roleRequested;                                          // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isStateInitialized;                                     // 0x00A3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EGSU[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    _disconnectionPenaltyEndOfBan;                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SocialParty.CustomGameBot
	 * Size -> 0x0008
	 */
	struct FCustomGameBot
	{
	public:
		unsigned char                                              UnknownData_CO6Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _role;                                                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _difficulty;                                             // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZC00[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _characterIndex;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SocialParty.CustomGameBotsData
	 * Size -> 0x0018
	 */
	struct FCustomGameBotsData
	{
	public:
		unsigned char                                              UnknownData_RGEV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomGameBot>                              _bots;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SocialParty.CustomGamePresetData
	 * Size -> 0x0038
	 */
	struct FCustomGamePresetData
	{
	public:
		unsigned char                                              UnknownData_6DIZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      _mapAvailabilities;                                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       _arePerkAvailable;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _areOfferingAvailable;                                   // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _areItemAvailable;                                       // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _areItemAddonAvailable;                                  // 0x001B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _areDlcContentAllowed;                                   // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPrivateMatch;                                         // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LHOR[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomGameBotsData                                 _botsData;                                               // 0x0020(0x0018) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SocialParty.PartySessionSettings
	 * Size -> 0x0098
	 */
	struct FPartySessionSettings
	{
	public:
		unsigned char                                              UnknownData_KFBO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _sessionId;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FString, class FString>                         _gameSessionInfos;                                       // 0x0018(0x0050) NativeAccessSpecifierPrivate
		class FString                                              _owningUserId;                                           // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _owningUserName;                                         // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isDedicated;                                            // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K229[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    _matchmakingTimestamp;                                   // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SocialParty.PartyMatchmakingSettings
	 * Size -> 0x0030
	 */
	struct FPartyMatchmakingSettings
	{
	public:
		unsigned char                                              UnknownData_LEEF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      _playerIds;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		EMatchmakingState                                          _matchmakingState;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R1Z2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    _startMatchmakingDateTimestamp;                          // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInFinalCountdown;                                     // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XSL2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SocialParty.SocialPartyState
	 * Size -> 0x0188
	 */
	struct FSocialPartyState
	{
	public:
		unsigned char                                              UnknownData_EZKJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomGamePresetData                               _customGamePresetData;                                   // 0x0008(0x0038) NativeAccessSpecifierPrivate
		struct FPartySessionSettings                               _partySessionSettings;                                   // 0x0040(0x0098) NativeAccessSpecifierPrivate
		struct FPartyMatchmakingSettings                           _partyMatchmakingSettings;                               // 0x00D8(0x0030) NativeAccessSpecifierPrivate
		TArray<class FName>                                        _playerJoinOrder;                                        // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, unsigned char>                           _playerChatIndices;                                      // 0x0118(0x0050) NativeAccessSpecifierPrivate
		int32_t                                                    _gameType;                                               // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isCrowdPlay;                                            // 0x016C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isUsingDedicatedServer;                                 // 0x016D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSNX[0x2];                                   // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _version;                                                // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _lastUpdatedTime;                                        // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _lastSentTime;                                           // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
