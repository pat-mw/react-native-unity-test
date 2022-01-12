/* eslint-disable react-native/no-inline-styles */
/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import React from 'react';
import {useState} from 'react';
import type {Node} from 'react';
import {View, Dimensions, Platform, Button} from 'react-native';

import UnityView, {
  UnityModule,
  UnityResponderView,
} from 'react-native-unity-play';

const {width, height} = Dimensions.get('window');

const App: () => Node = () => {
  const [isVisible, setVisible] = useState(false);
  let unityElement;

  if (Platform.OS === 'android') {
    console.log('android');
    unityElement = <UnityView style={{flex: 1}} />;
  } else {
    unityElement = (
      <UnityResponderView
        fullScreen={true}
        style={{width: width, height: height}}
      />
    );
  }

  return (
    <View>
      {!isVisible && (
        <Button title={'Start'} onPress={() => setVisible(true)} />
      )}
      {isVisible && (
        <>
          {unityElement}
          <View
            style={{
              position: 'absolute',
              top: 45,
              left: 20,
              zIndex: 2,
            }}>
            <Button
              title={'Close'}
              onPress={() => {
                if (Platform.OS === 'android') {
                  UnityModule.quit();
                }
                setVisible(false);
              }}
              style={{color: '#fff'}}
            />
          </View>
        </>
      )}
    </View>
  );
};

export default App;
